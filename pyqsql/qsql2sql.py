# -*- coding: utf-8 -*-

"""
This file is a part of quicksave project.
Copyright (c) 2016 Aleksander Gajewski <adiog@brainfuck.pl>,
                   Adam Morawski <poczta@adammorawski.pl>.
"""

import re
from _sha1 import sha1

from django_main.dependency_factory import DependencyFactory


class QsqlDoNotDisplayException(Exception):
    pass


def get_sha(content):
    return sha1(content.encode('utf-8')).hexdigest()


class AstNode(object):
    def get_sql_and_params(self):
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
    def get_sql_and_params(self):
        try:
            sql, params = self.ast_node.get_sql_and_params()
            return_sql = 'SELECT * FROM %s as djangoitem WHERE %s;' % (DependencyFactory.get_item_table().get_table_name(), sql)
            return_params = params
            return return_sql, return_params
        except QsqlDoNotDisplayException:
            return False


class AstQsqlQuery(UnaryAstNode):
    def get_sql_and_params(self):
        return self.ast_node.get_sql_and_params()


class AstPredicate(UnaryAstNode):
    def get_sql_and_params(self):
        return self.ast_node.get_sql_and_params()


class AstOrPredicate(BinaryAstNode):
    def get_sql_and_params(self):
        lhs_sql, lhs_params = self.lhs_ast_node.get_sql_and_params()
        rhs_sql, rhs_params = self.rhs_ast_node.get_sql_and_params()
        lhs_params.update(rhs_params)
        return_sql = '(%s OR %s)' % (lhs_sql, rhs_sql)
        return_params = lhs_params
        return return_sql, return_params


class AstAndPredicate(BinaryAstNode):
    def get_sql_and_params(self):
        lhs_sql, lhs_params = self.lhs_ast_node.get_sql_and_params()
        rhs_sql, rhs_params = self.rhs_ast_node.get_sql_and_params()
        lhs_params.update(rhs_params)
        return_sql = '(%s AND %s)' % (lhs_sql, rhs_sql)
        return_params = lhs_params
        return return_sql, return_params


class AstNotPredicate(UnaryAstNode):
    def get_sql_and_params(self):
        sql, params = self.ast_node.get_sql_and_params()
        return_sql = '(NOT %s)' % sql
        return_params = params
        return return_sql, return_params


class AstParPredicate(UnaryAstNode):
    def get_sql_and_params(self):
        return self.ast_node.get_sql_and_params()


class AstQsPredicate(UnaryAstNode):
    def get_sql_and_params(self, ):
        return self.ast_node.get_sql_and_params()


class AstQsHasPredicate(UnaryAstNode):
    def get_sql_and_params(self):
        sql, params = self.ast_node.get_sql_and_params()
        return_sql = 'EXISTS (SELECT * FROM %s as djangotag WHERE djangotag.item_id = djangoitem.id AND djangotag.tag = %s)' % (DependencyFactory.get_tag_table().get_table_name(), sql)
        return_params = params
        return return_sql, return_params


class AstQsStringPredicate(UnaryAstNode):
    def get_sql_and_params(self):
        return self.ast_node.get_sql_and_params()


class AstQsStringEqualPredicate(BinaryAstNode):
    def get_sql_and_params(self):
        lhs_sql, lhs_params = self.lhs_ast_node.get_sql_and_params()
        rhs_sql, rhs_params = self.rhs_ast_node.get_sql_and_params()
        lhs_params.update(rhs_params)
        return_sql = '(%s = %s)' % (lhs_sql, rhs_sql)
        return_params = lhs_params
        return return_sql, return_params


class AstQsStringInPredicate(BinaryAstNode):
    def get_sql_and_params(self):
        lhs_sql, lhs_params = self.lhs_ast_node.get_sql_and_params()
        rhs_sql, rhs_params = self.rhs_ast_node.get_sql_and_params()
        lhs_params.update(rhs_params)
        return_sql = "(%s LIKE %s)" % (lhs_sql, rhs_sql)
        return_params = lhs_params
        return return_sql, return_params


class AstQsStringMatchPredicate(BinaryAstNode):
    def get_sql_and_params(self):
        lhs_sql, lhs_params = self.lhs_ast_node.get_sql_and_params()
        rhs_sql, rhs_params = self.rhs_ast_node.get_sql_and_params()
        lhs_params.update(rhs_params)
        return_sql = "(%s LIKE %s)" % (lhs_sql, rhs_sql)
        return_params = lhs_params
        return return_sql, return_params


class AstQsStringWithParenthesis(UnaryAstNode):
    def get_sql_and_params(self):
        return self.ast_node.get_sql_and_params()


class AstQsString(UnaryAstNode):
    def get_sql_and_params(self):
        return self.ast_node.get_sql_and_params()


class AstQsGetItemFreetext(NullaryAstNode):
    def get_sql_and_params(self):
        return 'djangoitem.freetext', {}


class AstQsGetTagValue(UnaryAstNode):
    def get_sql_and_params(self):
        try:
            sql, params = self.ast_node.get_sql_and_params()
            return_sql = '(SELECT djangotag.value FROM %s as djangotag WHERE djangotag.item_id = djangoitem.id AND djangotag.tag = %s)' % (DependencyFactory.get_tag_table().get_table_name(), sql)
            return_params = params
            return return_sql, return_params
        except KeyError:
            raise QsqlDoNotDisplayException()


class AstQsIdentifier(NullaryAstNode):
    def get_identifier(self):
        return self.ctx.getText()[1:-1]

    def get_sql_and_params(self):
        identifier = self.get_identifier()
        identifier_hash = get_sha(identifier)
        return_sql = '%%%s%%' % identifier_hash
        return_params = {identifier_hash: identifier}
        return return_sql, return_params
