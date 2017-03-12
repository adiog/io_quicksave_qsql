// This file is a part of quicksave project.
// Copyright (c) 2017 Aleksander Gajewski <adiog@quicksave.io>.

var antlr4 = require('../lib/antlr4/index');
var qsql = require('../js_generated/index');

window.is_qsql_query_valid = function(query)
{
    var timestamp = performance.now();

    var chars = new antlr4.InputStream(query);
    var lexer = new qsql.qsqlLexer(chars);
    var tokens  = new antlr4.CommonTokenStream(lexer);
    var parser = new qsql.qsqlParser(tokens);
    var tree = parser.start();

    var result = (parser._syntaxErrors == 0);

    console.debug(performance.now() - timestamp);

    return result;
};

