# -*- coding: utf-8 -*-

"""
This file is a part of quicksave project.
Copyright (c) 2016 Aleksander Gajewski <adiog@brainfuck.pl>,
                   Adam Morawski <poczta@adammorawski.pl>.
"""

import re


class QsqlDoNotDisplayException(Exception):
    pass


class AstNode(object):
    def evaluate(self, item):
        raise NotImplementedError


class NullaryAstNode(AstNode):
    def __init__(self, ctx):
        self.ctx = ctx


class UnaryAstNode(AstNode):
    def __init__(self, ast_node):
        self.ast_node = ast_node


class BinaryAstNode(AstNode):
    def __init__(self, lhs_ast_node, rhs_ast_node):
        self.lhs_ast_node = lhs_ast_node
        self.rhs_ast_node = rhs_ast_node


class AstStart(UnaryAstNode):
    def evaluate(self, item):
        try:
            return self.ast_node.evaluate(item)
        except QsqlDoNotDisplayException:
            return False


class AstQsqlQuery(UnaryAstNode):
    def evaluate(self, item):
        return self.ast_node.evaluate(item)


class AstPredicate(UnaryAstNode):
    def evaluate(self, item):
        return self.ast_node.evaluate(item)


class AstOrPredicate(BinaryAstNode):
    def evaluate(self, item):
        return self.lhs_ast_node.evaluate(item) or self.rhs_ast_node.evaluate(item)


class AstAndPredicate(BinaryAstNode):
    def evaluate(self, item):
        return self.lhs_ast_node.evaluate(item) and self.rhs_ast_node.evaluate(item)


class AstNotPredicate(UnaryAstNode):
    def evaluate(self, item):
        return not self.ast_node.evaluate(item)


class AstParPredicate(UnaryAstNode):
    def evaluate(self, item):
        return self.ast_node.evaluate(item)


class AstQsPredicate(UnaryAstNode):
    def evaluate(self, item):
        return self.ast_node.evaluate(item)


class AstQsHasPredicate(UnaryAstNode):
    def evaluate(self, item):
        return self.ast_node.evaluate(item) in item['tags']


class AstQsStringPredicate(UnaryAstNode):
    def evaluate(self, item):
        return self.ast_node.evaluate(item)


class AstQsStringEqualPredicate(BinaryAstNode):
    def evaluate(self, item):
        return self.lhs_ast_node.evaluate(item) == self.rhs_ast_node.evaluate(item)


class AstQsStringInPredicate(BinaryAstNode):
    def evaluate(self, item):
        return self.lhs_ast_node.evaluate(item) in self.rhs_ast_node.evaluate(item)


class AstQsStringMatchPredicate(BinaryAstNode):
    def evaluate(self, item):
        text = self.lhs_ast_node.evaluate(item)
        pattern = self.rhs_ast_node.evaluate(item)
        return bool(re.match(re.compile('.*' + pattern + '.*'), text))


class AstQsString(UnaryAstNode):
    def evaluate(self, item):
        return self.ast_node.evaluate(item)


class AstQsGetItemFreetext(NullaryAstNode):
    def evaluate(self, item):
        return item['freetext']


class AstQsGetTagValue(UnaryAstNode):
    def evaluate(self, item):
        try:
            return item['tags'][self.ast_node.evaluate(item)]['value']
        except KeyError:
            raise QsqlDoNotDisplayException()


class AstQsIdentifier(NullaryAstNode):
    def get_identifier(self):
        return self.ctx.getText()[1:-1]

    def evaluate(self, item):
        return self.get_identifier()
