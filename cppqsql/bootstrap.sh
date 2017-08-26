#!/bin/bash
# This file is a part of quicksave project.
# Copyright 2017 Aleksander Gajewski <adiog@quicksave.io>.

cd $(dirname $0)

OUTPUT=$1

function generate_parser()
{
    cp ../grammar/qsql.g4 .
    java -jar ../lib/antlr-4.6-complete.jar \
         -o generated/qsql \
         -listener \
         -visitor \
         -Dlanguage=Cpp \
         qsql.g4
    rm qsql.g4
}

function fix_antlr()
{
    sed -e "s#class  qsqlLexer : public antlr4::Lexer {#&\npublic:\nstd::vector<std::string> vs;\nvirtual const std::vector<std::string>\& getChannelNames() const override {\n       return vs;\n    };#" -i generated/qsql/qsqlLexer.h
    sed -e "s#antlr4-runtime.h#antlr4-runtime/&#" -i generated/qsql/qsqlLexer.h
}

function install()
{
    mkdir -p $OUTPUT/generated
    rm -fr $OUTPUT/generated/qsql
    mv generated/qsql $OUTPUT/generated/qsql
    rm -fr generated
}

generate_parser
fix_antlr
install
