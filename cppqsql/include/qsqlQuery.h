// This file is a part of quicksave project.
// Copyright (c) 2017 Aleksander Gajewski <adiog@quicksave.io>.

#ifndef QUICKSAVE_QSQLQUERY_H
#define QUICKSAVE_QSQLQUERY_H

#include <qsql/qsqlAst.h>
#include <qsql/qsqlLexer.h>
#include <qsql/qsqlBaseListener.h>
#include <qsql/qsqlQuicksaveVisitor.h>
#include <ANTLRInputStream.h>
#include "tree/ParseTree.h"

class QsqlException : public std::runtime_error
{
    using std::runtime_error::runtime_error;
};

struct QsqlQuery {
    static std::string parseQsqlToSql(std::string user_hash, std::string qsqlQuery)
    {
        try
        {
            std::stringstream stream(qsqlQuery);
            antlr4::ANTLRInputStream input(stream);
            qsqlLexer lexer(&input);
            antlr4::CommonTokenStream tokens(&lexer);
            qsqlParser parser(&tokens);

            auto tree = parser.start();
            auto qsqlVisitor = qsqlQuicksaveVisitor();
            auto anyNode = qsqlVisitor.visitStart(tree);
            return FORMAT("SELECT * FROM meta WHERE ((user_hash = '%s') AND (%s));", user_hash.c_str(), GETSQL(anyNode).first.c_str());
        }
        catch (...)
        {
            throw QsqlException("");
        }
    }
};

#endif