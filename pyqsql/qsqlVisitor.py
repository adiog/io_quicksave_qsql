# -*- coding: utf-8 -*-

"""
This file is a part of quicksave project.
Copyright (c) 2016 Aleksander Gajewski <adiog@brainfuck.pl>,
                   Adam Morawski <poczta@adammorawski.pl>.
"""

from antlr4 import *
from qsql.generated.qsqlParser import qsqlParser


class qsqlVisitor(ParseTreeVisitor):
    def __init__(self, ast_module):
        self.ast_module = ast_module

    def qsql_visit(self, ctx, i):
        return ctx.getChild(i-1).accept(self)

    def visitStart(self, ctx:qsqlParser.StartContext):
        return self.ast_module.AstStart(self.qsql_visit(ctx, 1))


    def visitQsql_query(self, ctx:qsqlParser.Qsql_queryContext):
        return self.ast_module.AstQsqlQuery(self.qsql_visit(ctx, 2))


    def visitPredicate(self, ctx:qsqlParser.PredicateContext):
        return self.ast_module.AstPredicate(self.qsql_visit(ctx, 1))


    def visitOr_predicate(self, ctx:qsqlParser.Or_predicateContext):
        return self.ast_module.AstOrPredicate(self.qsql_visit(ctx, 2), self.qsql_visit(ctx, 4))


    def visitAnd_predicate(self, ctx:qsqlParser.And_predicateContext):
        return self.ast_module.AstAndPredicate(self.qsql_visit(ctx, 2), self.qsql_visit(ctx, 4))


    def visitNot_predicate(self, ctx:qsqlParser.Not_predicateContext):
        return self.ast_module.AstNotPredicate(self.qsql_visit(ctx, 2))


    def visitPar_predicate(self, ctx:qsqlParser.Par_predicateContext):
        return self.ast_module.AstParPredicate(self.qsql_visit(ctx, 2))


    def visitQs_predicate(self, ctx:qsqlParser.Qs_predicateContext):
        return self.ast_module.AstQsPredicate(self.qsql_visit(ctx, 1))


    def visitQs_has_predicate(self, ctx:qsqlParser.Qs_has_predicateContext):
        return self.ast_module.AstQsHasPredicate(self.qsql_visit(ctx, 2))


    def visitQs_string_predicate(self, ctx:qsqlParser.Qs_string_predicateContext):
        return self.ast_module.AstQsStringPredicate(self.qsql_visit(ctx, 1))


    def visitQs_string_equal_predicate(self, ctx:qsqlParser.Qs_string_equal_predicateContext):
        return self.ast_module.AstQsStringEqualPredicate(self.qsql_visit(ctx, 1), self.qsql_visit(ctx, 3))


    def visitQs_string_in_predicate(self, ctx:qsqlParser.Qs_string_in_predicateContext):
        return self.ast_module.AstQsStringInPredicate(self.qsql_visit(ctx, 1), self.qsql_visit(ctx, 3))


    def visitQs_string_match_predicate(self, ctx:qsqlParser.Qs_string_match_predicateContext):
        return self.ast_module.AstQsStringMatchPredicate(self.qsql_visit(ctx, 1), self.qsql_visit(ctx, 3))


    def visitQs_string_with_parenthesis(self, ctx:qsqlParser.Qs_string_with_parenthesisContext):
        return self.ast_module.AstQsStringWithParenthesis(self.qsql_visit(ctx, 2))


    def visitQs_string(self, ctx:qsqlParser.Qs_stringContext):
        return self.ast_module.AstQsString(self.qsql_visit(ctx, 1))


    def visitQs_get_item_freetext(self, ctx:qsqlParser.Qs_get_item_freetextContext):
        return self.ast_module.AstQsGetItemFreetext(ctx)


    def visitQs_get_tag_value(self, ctx:qsqlParser.Qs_get_tag_valueContext):
        return self.ast_module.AstQsGetTagValue(self.qsql_visit(ctx, 2))


    def visitQs_identifier(self, ctx:qsqlParser.Qs_identifierContext):
        return self.ast_module.AstQsIdentifier(ctx)



del qsqlParser