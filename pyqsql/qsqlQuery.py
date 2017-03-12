# -*- coding: utf-8 -*-

"""
This file is a part of quicksave project.
Copyright (c) 2016 Aleksander Gajewski <adiog@brainfuck.pl>,
                   Adam Morawski <poczta@adammorawski.pl>.
"""

from antlr4 import *

import qsql.src.qsqlAst
from qsql.generated.qsqlLexer import qsqlLexer
from qsql.generated.qsqlParser import qsqlParser
from qsql.src.qsqlVisitor import qsqlVisitor


class QsqlQuery(object):
    def __init__(self, query):
        print(query)
        input_stream = InputStream(query)
        lexer = qsqlLexer(input_stream)
        stream = CommonTokenStream(lexer)
        parser = qsqlParser(stream)
        tree = parser.start()
        visitor = qsqlVisitor(ast_module=qsql.src.qsqlAst)
        self.ast = visitor.visitStart(tree)
        print(self.ast)

    def execute(self, item):
        return self.ast.evaluate(item)

