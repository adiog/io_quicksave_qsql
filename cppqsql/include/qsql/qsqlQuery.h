// This file is a part of quicksave project.
// Copyright (c) 2017 Aleksander Gajewski <adiog@quicksave.io>.

#pragma once

#include <ANTLRInputStream.h>
#include <qsql/qsqlAst.h>
#include <qsql/qsqlBaseListener.h>
#include <qsql/qsqlLexer.h>
#include <qsql/qsqlQuicksaveVisitor.h>


namespace qsql {

class QsqlException : public std::runtime_error
{
    using std::runtime_error::runtime_error;
};

struct QsqlQuery
{
    static std::string
    parseQsqlToSql(std::string user_hash, std::string qsqlQuery, int limit = 10, int offset = 0)
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
            return FORMAT(
                "SELECT * FROM meta WHERE ((user_hash = '{}') AND ({})) ORDER BY created_at DESC LIMIT {} OFFSET {};",
                user_hash.c_str(),
                GETSQL(anyNode).first.c_str(),
                limit,
                offset);
        }
        catch (...)
        {
            throw QsqlException("");
        }
    }
};
}
