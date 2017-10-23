// This file is a part of quicksave project.
// Copyright (c) 2017 Aleksander Gajewski <adiog@quicksave.io>.

#pragma once

#include <qsql/qsqlSupersonicAst.h>
#include <qsql/qsqlLexer.h>
#include <qsql/qsqlBaseListener.h>
#include <qsql/qsqlQuicksaveVisitor.h>
#include <ANTLRInputStream.h>


class QsqlException : public std::runtime_error
{
    using std::runtime_error::runtime_error;
};

struct QsqlSupersonicExpression {
    static const supersonic::Expression* parseQsql(std::string user_hash, std::string qsqlQuery)
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
            return GETEXPRESSION(anyNode);
        }
        catch (...)
        {
            throw QsqlException("");
        }
    }
};
