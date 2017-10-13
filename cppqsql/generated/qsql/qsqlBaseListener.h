
// Generated from qsql.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "qsqlListener.h"


/**
 * This class provides an empty implementation of qsqlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  qsqlBaseListener : public qsqlListener {
public:

  virtual void enterStart(qsqlParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(qsqlParser::StartContext * /*ctx*/) override { }

  virtual void enterQsql_query(qsqlParser::Qsql_queryContext * /*ctx*/) override { }
  virtual void exitQsql_query(qsqlParser::Qsql_queryContext * /*ctx*/) override { }

  virtual void enterPredicate(qsqlParser::PredicateContext * /*ctx*/) override { }
  virtual void exitPredicate(qsqlParser::PredicateContext * /*ctx*/) override { }

  virtual void enterOr_predicate(qsqlParser::Or_predicateContext * /*ctx*/) override { }
  virtual void exitOr_predicate(qsqlParser::Or_predicateContext * /*ctx*/) override { }

  virtual void enterAnd_predicate(qsqlParser::And_predicateContext * /*ctx*/) override { }
  virtual void exitAnd_predicate(qsqlParser::And_predicateContext * /*ctx*/) override { }

  virtual void enterNot_predicate(qsqlParser::Not_predicateContext * /*ctx*/) override { }
  virtual void exitNot_predicate(qsqlParser::Not_predicateContext * /*ctx*/) override { }

  virtual void enterPar_predicate(qsqlParser::Par_predicateContext * /*ctx*/) override { }
  virtual void exitPar_predicate(qsqlParser::Par_predicateContext * /*ctx*/) override { }

  virtual void enterQs_predicate(qsqlParser::Qs_predicateContext * /*ctx*/) override { }
  virtual void exitQs_predicate(qsqlParser::Qs_predicateContext * /*ctx*/) override { }

  virtual void enterQs_tag_predicate(qsqlParser::Qs_tag_predicateContext * /*ctx*/) override { }
  virtual void exitQs_tag_predicate(qsqlParser::Qs_tag_predicateContext * /*ctx*/) override { }

  virtual void enterQs_string_predicate(qsqlParser::Qs_string_predicateContext * /*ctx*/) override { }
  virtual void exitQs_string_predicate(qsqlParser::Qs_string_predicateContext * /*ctx*/) override { }

  virtual void enterQs_string_equal_predicate(qsqlParser::Qs_string_equal_predicateContext * /*ctx*/) override { }
  virtual void exitQs_string_equal_predicate(qsqlParser::Qs_string_equal_predicateContext * /*ctx*/) override { }

  virtual void enterQs_string_in_predicate(qsqlParser::Qs_string_in_predicateContext * /*ctx*/) override { }
  virtual void exitQs_string_in_predicate(qsqlParser::Qs_string_in_predicateContext * /*ctx*/) override { }

  virtual void enterQs_string_match_predicate(qsqlParser::Qs_string_match_predicateContext * /*ctx*/) override { }
  virtual void exitQs_string_match_predicate(qsqlParser::Qs_string_match_predicateContext * /*ctx*/) override { }

  virtual void enterQs_string_with_parenthesis(qsqlParser::Qs_string_with_parenthesisContext * /*ctx*/) override { }
  virtual void exitQs_string_with_parenthesis(qsqlParser::Qs_string_with_parenthesisContext * /*ctx*/) override { }

  virtual void enterQs_string(qsqlParser::Qs_stringContext * /*ctx*/) override { }
  virtual void exitQs_string(qsqlParser::Qs_stringContext * /*ctx*/) override { }

  virtual void enterQs_get_item_name(qsqlParser::Qs_get_item_nameContext * /*ctx*/) override { }
  virtual void exitQs_get_item_name(qsqlParser::Qs_get_item_nameContext * /*ctx*/) override { }

  virtual void enterQs_get_item_text(qsqlParser::Qs_get_item_textContext * /*ctx*/) override { }
  virtual void exitQs_get_item_text(qsqlParser::Qs_get_item_textContext * /*ctx*/) override { }

  virtual void enterQs_get_item_type(qsqlParser::Qs_get_item_typeContext * /*ctx*/) override { }
  virtual void exitQs_get_item_type(qsqlParser::Qs_get_item_typeContext * /*ctx*/) override { }

  virtual void enterQs_get_item_author(qsqlParser::Qs_get_item_authorContext * /*ctx*/) override { }
  virtual void exitQs_get_item_author(qsqlParser::Qs_get_item_authorContext * /*ctx*/) override { }

  virtual void enterQs_get_item_source_title(qsqlParser::Qs_get_item_source_titleContext * /*ctx*/) override { }
  virtual void exitQs_get_item_source_title(qsqlParser::Qs_get_item_source_titleContext * /*ctx*/) override { }

  virtual void enterQs_get_item_source_url(qsqlParser::Qs_get_item_source_urlContext * /*ctx*/) override { }
  virtual void exitQs_get_item_source_url(qsqlParser::Qs_get_item_source_urlContext * /*ctx*/) override { }

  virtual void enterQs_get_tag_value(qsqlParser::Qs_get_tag_valueContext * /*ctx*/) override { }
  virtual void exitQs_get_tag_value(qsqlParser::Qs_get_tag_valueContext * /*ctx*/) override { }

  virtual void enterQs_identifier(qsqlParser::Qs_identifierContext * /*ctx*/) override { }
  virtual void exitQs_identifier(qsqlParser::Qs_identifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

