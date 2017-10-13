#!/bin/bash
# This file is a part of quicksave project.
# Copyright 2017 Aleksander Gajewski <adiog@quicksave.io>.

cd $(dirname $0)


function generate_parser()
{
    cp ../grammar/qsql.g4 .
    java -jar ../lib/antlr-4.6-complete.jar \
         -o generated \
         -listener \
         -visitor \
         -Dlanguage=JavaScript \
         qsql.g4
    rm qsql.g4
}

function post_generation()
{
    sed -e "s#require('antlr4/index')#require('../../lib/antlr4/index')#" -i generated/*
}

function generate_index()
{
    (
    echo "exports.qsqlLexer = require('./qsqlLexer').qsqlLexer;"
    echo "exports.qsqlListener = require('./qsqlListener').qsqlListener;"
    echo "exports.qsqlParser = require('./qsqlParser').qsqlParser;"
    echo "exports.qsqlVisitor = require('./qsqlVisitor').qsqlVisitor;"
    ) > generated/index.js
}

function install()
{
    TEMPJS=`mktemp`
    browserify qsqlMain.js --outfile ${TEMPJS}
    #uglifyjs ${TEMPJS} --compress --mangle --output web_static/js/qsql.min.js
    rm -fr generated/*
    mv ${TEMPJS} generated/qsql.min.js
}

generate_parser
post_generation
generate_index
install

