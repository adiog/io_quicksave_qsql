
// Generated from qsql.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


namespace qsql {


class  qsqlParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, IDENTIFIER = 3, EQUAL = 4, K_IN = 5, K_MATCH = 6, 
    K_NAME = 7, K_TEXT = 8, K_TYPE = 9, K_AUTHOR = 10, K_SOURCE = 11, K_URL = 12, 
    K_GET = 13, K_TAG = 14, K_NOT = 15, K_AND = 16, K_OR = 17, K_FROM = 18, 
    K_TILL = 19, K_WHERE = 20, SPACES = 21
  };

  enum {
    RuleStart = 0, RuleQsql_query = 1, RulePredicate = 2, RuleOr_predicate = 3, 
    RuleAnd_predicate = 4, RuleNot_predicate = 5, RulePar_predicate = 6, 
    RuleQs_predicate = 7, RuleQs_tag_predicate = 8, RuleQs_string_predicate = 9, 
    RuleQs_string_equal_predicate = 10, RuleQs_string_in_predicate = 11, 
    RuleQs_string_match_predicate = 12, RuleQs_string_with_parenthesis = 13, 
    RuleQs_string = 14, RuleQs_get_item_name = 15, RuleQs_get_item_text = 16, 
    RuleQs_get_item_type = 17, RuleQs_get_item_author = 18, RuleQs_get_item_source_title = 19, 
    RuleQs_get_item_source_url = 20, RuleQs_get_tag_value = 21, RuleQs_identifier = 22
  };

  qsqlParser(antlr4::TokenStream *input);
  ~qsqlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StartContext;
  class Qsql_queryContext;
  class PredicateContext;
  class Or_predicateContext;
  class And_predicateContext;
  class Not_predicateContext;
  class Par_predicateContext;
  class Qs_predicateContext;
  class Qs_tag_predicateContext;
  class Qs_string_predicateContext;
  class Qs_string_equal_predicateContext;
  class Qs_string_in_predicateContext;
  class Qs_string_match_predicateContext;
  class Qs_string_with_parenthesisContext;
  class Qs_stringContext;
  class Qs_get_item_nameContext;
  class Qs_get_item_textContext;
  class Qs_get_item_typeContext;
  class Qs_get_item_authorContext;
  class Qs_get_item_source_titleContext;
  class Qs_get_item_source_urlContext;
  class Qs_get_tag_valueContext;
  class Qs_identifierContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qsql_queryContext *qsql_query();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  Qsql_queryContext : public antlr4::ParserRuleContext {
  public:
    Qsql_queryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_WHERE();
    PredicateContext *predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qsql_queryContext* qsql_query();

  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_predicateContext *or_predicate();
    And_predicateContext *and_predicate();
    Not_predicateContext *not_predicate();
    Par_predicateContext *par_predicate();
    Qs_predicateContext *qs_predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class  Or_predicateContext : public antlr4::ParserRuleContext {
  public:
    Or_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *K_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_predicateContext* or_predicate();

  class  And_predicateContext : public antlr4::ParserRuleContext {
  public:
    And_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *K_AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_predicateContext* and_predicate();

  class  Not_predicateContext : public antlr4::ParserRuleContext {
  public:
    Not_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_NOT();
    PredicateContext *predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Not_predicateContext* not_predicate();

  class  Par_predicateContext : public antlr4::ParserRuleContext {
  public:
    Par_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateContext *predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Par_predicateContext* par_predicate();

  class  Qs_predicateContext : public antlr4::ParserRuleContext {
  public:
    Qs_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qs_tag_predicateContext *qs_tag_predicate();
    Qs_string_predicateContext *qs_string_predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_predicateContext* qs_predicate();

  class  Qs_tag_predicateContext : public antlr4::ParserRuleContext {
  public:
    Qs_tag_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_TAG();
    Qs_stringContext *qs_string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_tag_predicateContext* qs_tag_predicate();

  class  Qs_string_predicateContext : public antlr4::ParserRuleContext {
  public:
    Qs_string_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qs_string_equal_predicateContext *qs_string_equal_predicate();
    Qs_string_in_predicateContext *qs_string_in_predicate();
    Qs_string_match_predicateContext *qs_string_match_predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_string_predicateContext* qs_string_predicate();

  class  Qs_string_equal_predicateContext : public antlr4::ParserRuleContext {
  public:
    Qs_string_equal_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Qs_stringContext *> qs_string();
    Qs_stringContext* qs_string(size_t i);
    antlr4::tree::TerminalNode *EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_string_equal_predicateContext* qs_string_equal_predicate();

  class  Qs_string_in_predicateContext : public antlr4::ParserRuleContext {
  public:
    Qs_string_in_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Qs_stringContext *> qs_string();
    Qs_stringContext* qs_string(size_t i);
    antlr4::tree::TerminalNode *K_IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_string_in_predicateContext* qs_string_in_predicate();

  class  Qs_string_match_predicateContext : public antlr4::ParserRuleContext {
  public:
    Qs_string_match_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Qs_stringContext *> qs_string();
    Qs_stringContext* qs_string(size_t i);
    antlr4::tree::TerminalNode *K_MATCH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_string_match_predicateContext* qs_string_match_predicate();

  class  Qs_string_with_parenthesisContext : public antlr4::ParserRuleContext {
  public:
    Qs_string_with_parenthesisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qs_stringContext *qs_string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_string_with_parenthesisContext* qs_string_with_parenthesis();

  class  Qs_stringContext : public antlr4::ParserRuleContext {
  public:
    Qs_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Qs_string_with_parenthesisContext *qs_string_with_parenthesis();
    Qs_get_item_nameContext *qs_get_item_name();
    Qs_get_item_textContext *qs_get_item_text();
    Qs_get_item_typeContext *qs_get_item_type();
    Qs_get_item_authorContext *qs_get_item_author();
    Qs_get_item_source_titleContext *qs_get_item_source_title();
    Qs_get_item_source_urlContext *qs_get_item_source_url();
    Qs_get_tag_valueContext *qs_get_tag_value();
    Qs_identifierContext *qs_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_stringContext* qs_string();

  class  Qs_get_item_nameContext : public antlr4::ParserRuleContext {
  public:
    Qs_get_item_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_get_item_nameContext* qs_get_item_name();

  class  Qs_get_item_textContext : public antlr4::ParserRuleContext {
  public:
    Qs_get_item_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_get_item_textContext* qs_get_item_text();

  class  Qs_get_item_typeContext : public antlr4::ParserRuleContext {
  public:
    Qs_get_item_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_TYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_get_item_typeContext* qs_get_item_type();

  class  Qs_get_item_authorContext : public antlr4::ParserRuleContext {
  public:
    Qs_get_item_authorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_AUTHOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_get_item_authorContext* qs_get_item_author();

  class  Qs_get_item_source_titleContext : public antlr4::ParserRuleContext {
  public:
    Qs_get_item_source_titleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_SOURCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_get_item_source_titleContext* qs_get_item_source_title();

  class  Qs_get_item_source_urlContext : public antlr4::ParserRuleContext {
  public:
    Qs_get_item_source_urlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_URL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_get_item_source_urlContext* qs_get_item_source_url();

  class  Qs_get_tag_valueContext : public antlr4::ParserRuleContext {
  public:
    Qs_get_tag_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_GET();
    Qs_stringContext *qs_string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_get_tag_valueContext* qs_get_tag_value();

  class  Qs_identifierContext : public antlr4::ParserRuleContext {
  public:
    Qs_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qs_identifierContext* qs_identifier();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace qsql
