#!/bin/bash
# This file is a part of quicksave project.
# Copyright 2017 Aleksander Gajewski <adiog@quicksave.io>.

cd $(dirname $0)

function generate_parser()
{
    cp ../grammar/qsql.g4 .
    java -jar ../lib/antlr-4.7-complete.jar \
         -o generated/qsql \
         -listener \
         -visitor \
         -Dlanguage=Cpp \
         -package qsql \
         qsql.g4
    rm qsql.g4
}

function fix_antlr()
{
    sed -e "s#antlr4-runtime.h#antlr4-runtime/&#" -i generated/qsql/qsqlLexer.h
}


generate_parser
fix_antlr

