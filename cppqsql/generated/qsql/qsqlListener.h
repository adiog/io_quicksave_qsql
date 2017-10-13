
// Generated from qsql.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "qsqlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by qsqlParser.
 */
class  qsqlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStart(qsqlParser::StartContext *ctx) = 0;
  virtual void exitStart(qsqlParser::StartContext *ctx) = 0;

  virtual void enterQsql_query(qsqlParser::Qsql_queryContext *ctx) = 0;
  virtual void exitQsql_query(qsqlParser::Qsql_queryContext *ctx) = 0;

  virtual void enterPredicate(qsqlParser::PredicateContext *ctx) = 0;
  virtual void exitPredicate(qsqlParser::PredicateContext *ctx) = 0;

  virtual void enterOr_predicate(qsqlParser::Or_predicateContext *ctx) = 0;
  virtual void exitOr_predicate(qsqlParser::Or_predicateContext *ctx) = 0;

  virtual void enterAnd_predicate(qsqlParser::And_predicateContext *ctx) = 0;
  virtual void exitAnd_predicate(qsqlParser::And_predicateContext *ctx) = 0;

  virtual void enterNot_predicate(qsqlParser::Not_predicateContext *ctx) = 0;
  virtual void exitNot_predicate(qsqlParser::Not_predicateContext *ctx) = 0;

  virtual void enterPar_predicate(qsqlParser::Par_predicateContext *ctx) = 0;
  virtual void exitPar_predicate(qsqlParser::Par_predicateContext *ctx) = 0;

  virtual void enterQs_predicate(qsqlParser::Qs_predicateContext *ctx) = 0;
  virtual void exitQs_predicate(qsqlParser::Qs_predicateContext *ctx) = 0;

  virtual void enterQs_tag_predicate(qsqlParser::Qs_tag_predicateContext *ctx) = 0;
  virtual void exitQs_tag_predicate(qsqlParser::Qs_tag_predicateContext *ctx) = 0;

  virtual void enterQs_string_predicate(qsqlParser::Qs_string_predicateContext *ctx) = 0;
  virtual void exitQs_string_predicate(qsqlParser::Qs_string_predicateContext *ctx) = 0;

  virtual void enterQs_string_equal_predicate(qsqlParser::Qs_string_equal_predicateContext *ctx) = 0;
  virtual void exitQs_string_equal_predicate(qsqlParser::Qs_string_equal_predicateContext *ctx) = 0;

  virtual void enterQs_string_in_predicate(qsqlParser::Qs_string_in_predicateContext *ctx) = 0;
  virtual void exitQs_string_in_predicate(qsqlParser::Qs_string_in_predicateContext *ctx) = 0;

  virtual void enterQs_string_match_predicate(qsqlParser::Qs_string_match_predicateContext *ctx) = 0;
  virtual void exitQs_string_match_predicate(qsqlParser::Qs_string_match_predicateContext *ctx) = 0;

  virtual void enterQs_string_with_parenthesis(qsqlParser::Qs_string_with_parenthesisContext *ctx) = 0;
  virtual void exitQs_string_with_parenthesis(qsqlParser::Qs_string_with_parenthesisContext *ctx) = 0;

  virtual void enterQs_string(qsqlParser::Qs_stringContext *ctx) = 0;
  virtual void exitQs_string(qsqlParser::Qs_stringContext *ctx) = 0;

  virtual void enterQs_get_item_name(qsqlParser::Qs_get_item_nameContext *ctx) = 0;
  virtual void exitQs_get_item_name(qsqlParser::Qs_get_item_nameContext *ctx) = 0;

  virtual void enterQs_get_item_text(qsqlParser::Qs_get_item_textContext *ctx) = 0;
  virtual void exitQs_get_item_text(qsqlParser::Qs_get_item_textContext *ctx) = 0;

  virtual void enterQs_get_item_type(qsqlParser::Qs_get_item_typeContext *ctx) = 0;
  virtual void exitQs_get_item_type(qsqlParser::Qs_get_item_typeContext *ctx) = 0;

  virtual void enterQs_get_item_author(qsqlParser::Qs_get_item_authorContext *ctx) = 0;
  virtual void exitQs_get_item_author(qsqlParser::Qs_get_item_authorContext *ctx) = 0;

  virtual void enterQs_get_item_source_title(qsqlParser::Qs_get_item_source_titleContext *ctx) = 0;
  virtual void exitQs_get_item_source_title(qsqlParser::Qs_get_item_source_titleContext *ctx) = 0;

  virtual void enterQs_get_item_source_url(qsqlParser::Qs_get_item_source_urlContext *ctx) = 0;
  virtual void exitQs_get_item_source_url(qsqlParser::Qs_get_item_source_urlContext *ctx) = 0;

  virtual void enterQs_get_tag_value(qsqlParser::Qs_get_tag_valueContext *ctx) = 0;
  virtual void exitQs_get_tag_value(qsqlParser::Qs_get_tag_valueContext *ctx) = 0;

  virtual void enterQs_identifier(qsqlParser::Qs_identifierContext *ctx) = 0;
  virtual void exitQs_identifier(qsqlParser::Qs_identifierContext *ctx) = 0;


};

