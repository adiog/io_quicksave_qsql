#!/bin/bash

if [[ -z "${QS_ROOT}" ]];
then
    echo "Use . /env.sh"
    exit 1
fi


QS_QSQL_JS_GENERATED=${QS_ROOT}/qsql/js_generated

function generate_parser()
{
    java -jar ${QS_ANTLR_JAR} \
         -o ${QS_QSQL_JS_GENERATED} \
         -listener \
         -visitor \
         -Dlanguage=JavaScript \
         -lib ${QS_ROOT}/qsql \
         ${QS_QSQL_GRAMMAR}
}

function post_generation()
{
    sed -e "s#require('antlr4/index')#require('../lib/antlr4/index')#" -i ${QS_QSQL_JS_GENERATED}/*
}

function generate_index()
{
    (
    echo "exports.qsqlLexer = require('./qsqlLexer').qsqlLexer;"
    echo "exports.qsqlListener = require('./qsqlListener').qsqlListener;"
    echo "exports.qsqlParser = require('./qsqlParser').qsqlParser;"
    echo "exports.qsqlVisitor = require('./qsqlVisitor').qsqlVisitor;"
    ) > ${QS_QSQL_JS_GENERATED}/index.js
}

generate_parser
post_generation
generate_index
