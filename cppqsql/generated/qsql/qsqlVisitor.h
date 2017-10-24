
// Generated from qsql.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "qsqlParser.h"


namespace qsql {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by qsqlParser.
 */
class  qsqlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by qsqlParser.
   */
    virtual antlrcpp::Any visitStart(qsqlParser::StartContext *context) = 0;

    virtual antlrcpp::Any visitQsql_query(qsqlParser::Qsql_queryContext *context) = 0;

    virtual antlrcpp::Any visitPredicate(qsqlParser::PredicateContext *context) = 0;

    virtual antlrcpp::Any visitOr_predicate(qsqlParser::Or_predicateContext *context) = 0;

    virtual antlrcpp::Any visitAnd_predicate(qsqlParser::And_predicateContext *context) = 0;

    virtual antlrcpp::Any visitNot_predicate(qsqlParser::Not_predicateContext *context) = 0;

    virtual antlrcpp::Any visitPar_predicate(qsqlParser::Par_predicateContext *context) = 0;

    virtual antlrcpp::Any visitQs_predicate(qsqlParser::Qs_predicateContext *context) = 0;

    virtual antlrcpp::Any visitQs_tag_predicate(qsqlParser::Qs_tag_predicateContext *context) = 0;

    virtual antlrcpp::Any visitQs_string_predicate(qsqlParser::Qs_string_predicateContext *context) = 0;

    virtual antlrcpp::Any visitQs_string_equal_predicate(qsqlParser::Qs_string_equal_predicateContext *context) = 0;

    virtual antlrcpp::Any visitQs_string_in_predicate(qsqlParser::Qs_string_in_predicateContext *context) = 0;

    virtual antlrcpp::Any visitQs_string_match_predicate(qsqlParser::Qs_string_match_predicateContext *context) = 0;

    virtual antlrcpp::Any visitQs_string_with_parenthesis(qsqlParser::Qs_string_with_parenthesisContext *context) = 0;

    virtual antlrcpp::Any visitQs_string(qsqlParser::Qs_stringContext *context) = 0;

    virtual antlrcpp::Any visitQs_get_item_name(qsqlParser::Qs_get_item_nameContext *context) = 0;

    virtual antlrcpp::Any visitQs_get_item_text(qsqlParser::Qs_get_item_textContext *context) = 0;

    virtual antlrcpp::Any visitQs_get_item_type(qsqlParser::Qs_get_item_typeContext *context) = 0;

    virtual antlrcpp::Any visitQs_get_item_author(qsqlParser::Qs_get_item_authorContext *context) = 0;

    virtual antlrcpp::Any visitQs_get_item_source_title(qsqlParser::Qs_get_item_source_titleContext *context) = 0;

    virtual antlrcpp::Any visitQs_get_item_source_url(qsqlParser::Qs_get_item_source_urlContext *context) = 0;

    virtual antlrcpp::Any visitQs_get_tag_value(qsqlParser::Qs_get_tag_valueContext *context) = 0;

    virtual antlrcpp::Any visitQs_identifier(qsqlParser::Qs_identifierContext *context) = 0;


};

}  // namespace qsql
