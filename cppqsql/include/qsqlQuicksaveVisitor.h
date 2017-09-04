
// Generated from qsql/qsql.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "qsql/qsqlVisitor.h"


/**
 * This class provides an empty implementation of qsqlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class qsqlQuicksaveVisitor : public qsqlVisitor
{
public:
    virtual antlrcpp::Any visitStart(qsqlParser::StartContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstStart>(ctx->children[0]->accept(this)));
    }

    virtual antlrcpp::Any visitQsql_query(qsqlParser::Qsql_queryContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsqlQuery>(ctx->children[1]->accept(this)));
    }

    virtual antlrcpp::Any visitPredicate(qsqlParser::PredicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstPredicate>(
            ctx->children[0]->accept(this)));
    }

    virtual antlrcpp::Any visitOr_predicate(qsqlParser::Or_predicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstOrPredicate>(
            ctx->children[1]->accept(this),
            ctx->children[3]->accept(this)));
    }

    virtual antlrcpp::Any visitAnd_predicate(qsqlParser::And_predicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstAndPredicate>(
            ctx->children[1]->accept(this),
            ctx->children[3]->accept(this)));
    }

    virtual antlrcpp::Any visitNot_predicate(qsqlParser::Not_predicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstNotPredicate>(
            ctx->children[1]->accept(this)));
    }

    virtual antlrcpp::Any visitPar_predicate(qsqlParser::Par_predicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstParPredicate>(
            ctx->children[1]->accept(this)));
    }

    virtual antlrcpp::Any visitQs_predicate(qsqlParser::Qs_predicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsPredicate>(
            ctx->children[0]->accept(this)));
    }

    virtual antlrcpp::Any visitQs_tag_predicate(qsqlParser::Qs_tag_predicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsTagPredicate>(
            ctx->children[1]->accept(this)));
    }

    virtual antlrcpp::Any visitQs_string_predicate(qsqlParser::Qs_string_predicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsStringPredicate>(
            ctx->children[0]->accept(this)));
    }

    virtual antlrcpp::Any visitQs_string_equal_predicate(qsqlParser::Qs_string_equal_predicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsStringEqualPredicate>(
            ctx->children[0]->accept(this),
            ctx->children[2]->accept(this)));
    }

    virtual antlrcpp::Any visitQs_string_in_predicate(qsqlParser::Qs_string_in_predicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsStringInPredicate>(
            ctx->children[0]->accept(this),
            ctx->children[2]->accept(this)));
    }

    virtual antlrcpp::Any visitQs_string_match_predicate(qsqlParser::Qs_string_match_predicateContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsStringMatchPredicate>(
            ctx->children[0]->accept(this),
            ctx->children[2]->accept(this)));
    }

    virtual antlrcpp::Any visitQs_string_with_parenthesis(qsqlParser::Qs_string_with_parenthesisContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsStringWithParenthesis>(
            ctx->children[1]->accept(this)));
    }

    virtual antlrcpp::Any visitQs_string(qsqlParser::Qs_stringContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsString>(
            ctx->children[0]->accept(this)));
    }

    virtual antlrcpp::Any visitQs_get_item_name(qsqlParser::Qs_get_item_nameContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsGetItemName>(
            ctx
        ));
    }

    virtual antlrcpp::Any visitQs_get_item_text(qsqlParser::Qs_get_item_textContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsGetItemText>(
            ctx
        ));
    }

    virtual antlrcpp::Any visitQs_get_item_type(qsqlParser::Qs_get_item_typeContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsGetItemType>(
            ctx
        ));
    }

    virtual antlrcpp::Any visitQs_get_item_author(qsqlParser::Qs_get_item_authorContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsGetItemAuthor>(
            ctx
        ));
    }

    virtual antlrcpp::Any visitQs_get_item_source_title(qsqlParser::Qs_get_item_source_titleContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsGetItemSourceTitle>(
            ctx
        ));
    }

    virtual antlrcpp::Any visitQs_get_item_source_url(qsqlParser::Qs_get_item_source_urlContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsGetItemSourceUrl>(
            ctx
        ));
    }

    virtual antlrcpp::Any visitQs_get_tag_value(qsqlParser::Qs_get_tag_valueContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsGetTagValue>(
            ctx->children[1]->accept(this)));
    }

    virtual antlrcpp::Any visitQs_identifier(qsqlParser::Qs_identifierContext *ctx) override
    {
        return std::shared_ptr<AstNode>(std::make_shared<AstQsIdentifier>(
            ctx  //->children[0]->accept(this)
            ));
    }
};
