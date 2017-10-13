
// Generated from qsql.g4 by ANTLR 4.6


#include "qsqlListener.h"
#include "qsqlVisitor.h"

#include "qsqlParser.h"


using namespace antlrcpp;
using namespace antlr4;

qsqlParser::qsqlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

qsqlParser::~qsqlParser() {
  delete _interpreter;
}

std::string qsqlParser::getGrammarFileName() const {
  return "qsql.g4";
}

const std::vector<std::string>& qsqlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& qsqlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

qsqlParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qsqlParser::Qsql_queryContext* qsqlParser::StartContext::qsql_query() {
  return getRuleContext<qsqlParser::Qsql_queryContext>(0);
}

tree::TerminalNode* qsqlParser::StartContext::EOF() {
  return getToken(qsqlParser::EOF, 0);
}


size_t qsqlParser::StartContext::getRuleIndex() const {
  return qsqlParser::RuleStart;
}

void qsqlParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void qsqlParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}


antlrcpp::Any qsqlParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::StartContext* qsqlParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, qsqlParser::RuleStart);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    qsql_query();
    setState(47);
    match(qsqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qsql_queryContext ------------------------------------------------------------------

qsqlParser::Qsql_queryContext::Qsql_queryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Qsql_queryContext::K_WHERE() {
  return getToken(qsqlParser::K_WHERE, 0);
}

qsqlParser::PredicateContext* qsqlParser::Qsql_queryContext::predicate() {
  return getRuleContext<qsqlParser::PredicateContext>(0);
}


size_t qsqlParser::Qsql_queryContext::getRuleIndex() const {
  return qsqlParser::RuleQsql_query;
}

void qsqlParser::Qsql_queryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQsql_query(this);
}

void qsqlParser::Qsql_queryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQsql_query(this);
}


antlrcpp::Any qsqlParser::Qsql_queryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQsql_query(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qsql_queryContext* qsqlParser::qsql_query() {
  Qsql_queryContext *_localctx = _tracker.createInstance<Qsql_queryContext>(_ctx, getState());
  enterRule(_localctx, 2, qsqlParser::RuleQsql_query);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(qsqlParser::K_WHERE);
    setState(50);
    predicate();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateContext ------------------------------------------------------------------

qsqlParser::PredicateContext::PredicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qsqlParser::Or_predicateContext* qsqlParser::PredicateContext::or_predicate() {
  return getRuleContext<qsqlParser::Or_predicateContext>(0);
}

qsqlParser::And_predicateContext* qsqlParser::PredicateContext::and_predicate() {
  return getRuleContext<qsqlParser::And_predicateContext>(0);
}

qsqlParser::Not_predicateContext* qsqlParser::PredicateContext::not_predicate() {
  return getRuleContext<qsqlParser::Not_predicateContext>(0);
}

qsqlParser::Par_predicateContext* qsqlParser::PredicateContext::par_predicate() {
  return getRuleContext<qsqlParser::Par_predicateContext>(0);
}

qsqlParser::Qs_predicateContext* qsqlParser::PredicateContext::qs_predicate() {
  return getRuleContext<qsqlParser::Qs_predicateContext>(0);
}


size_t qsqlParser::PredicateContext::getRuleIndex() const {
  return qsqlParser::RulePredicate;
}

void qsqlParser::PredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicate(this);
}

void qsqlParser::PredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicate(this);
}


antlrcpp::Any qsqlParser::PredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitPredicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::PredicateContext* qsqlParser::predicate() {
  PredicateContext *_localctx = _tracker.createInstance<PredicateContext>(_ctx, getState());
  enterRule(_localctx, 4, qsqlParser::RulePredicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(57);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(52);
      or_predicate();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(53);
      and_predicate();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(54);
      not_predicate();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(55);
      par_predicate();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(56);
      qs_predicate();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Or_predicateContext ------------------------------------------------------------------

qsqlParser::Or_predicateContext::Or_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qsqlParser::PredicateContext *> qsqlParser::Or_predicateContext::predicate() {
  return getRuleContexts<qsqlParser::PredicateContext>();
}

qsqlParser::PredicateContext* qsqlParser::Or_predicateContext::predicate(size_t i) {
  return getRuleContext<qsqlParser::PredicateContext>(i);
}

tree::TerminalNode* qsqlParser::Or_predicateContext::K_OR() {
  return getToken(qsqlParser::K_OR, 0);
}


size_t qsqlParser::Or_predicateContext::getRuleIndex() const {
  return qsqlParser::RuleOr_predicate;
}

void qsqlParser::Or_predicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr_predicate(this);
}

void qsqlParser::Or_predicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr_predicate(this);
}


antlrcpp::Any qsqlParser::Or_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitOr_predicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Or_predicateContext* qsqlParser::or_predicate() {
  Or_predicateContext *_localctx = _tracker.createInstance<Or_predicateContext>(_ctx, getState());
  enterRule(_localctx, 6, qsqlParser::RuleOr_predicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    match(qsqlParser::T__0);
    setState(60);
    predicate();
    setState(61);
    match(qsqlParser::K_OR);
    setState(62);
    predicate();
    setState(63);
    match(qsqlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_predicateContext ------------------------------------------------------------------

qsqlParser::And_predicateContext::And_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qsqlParser::PredicateContext *> qsqlParser::And_predicateContext::predicate() {
  return getRuleContexts<qsqlParser::PredicateContext>();
}

qsqlParser::PredicateContext* qsqlParser::And_predicateContext::predicate(size_t i) {
  return getRuleContext<qsqlParser::PredicateContext>(i);
}

tree::TerminalNode* qsqlParser::And_predicateContext::K_AND() {
  return getToken(qsqlParser::K_AND, 0);
}


size_t qsqlParser::And_predicateContext::getRuleIndex() const {
  return qsqlParser::RuleAnd_predicate;
}

void qsqlParser::And_predicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_predicate(this);
}

void qsqlParser::And_predicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_predicate(this);
}


antlrcpp::Any qsqlParser::And_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitAnd_predicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::And_predicateContext* qsqlParser::and_predicate() {
  And_predicateContext *_localctx = _tracker.createInstance<And_predicateContext>(_ctx, getState());
  enterRule(_localctx, 8, qsqlParser::RuleAnd_predicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(qsqlParser::T__0);
    setState(66);
    predicate();
    setState(67);
    match(qsqlParser::K_AND);
    setState(68);
    predicate();
    setState(69);
    match(qsqlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Not_predicateContext ------------------------------------------------------------------

qsqlParser::Not_predicateContext::Not_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Not_predicateContext::K_NOT() {
  return getToken(qsqlParser::K_NOT, 0);
}

qsqlParser::PredicateContext* qsqlParser::Not_predicateContext::predicate() {
  return getRuleContext<qsqlParser::PredicateContext>(0);
}


size_t qsqlParser::Not_predicateContext::getRuleIndex() const {
  return qsqlParser::RuleNot_predicate;
}

void qsqlParser::Not_predicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot_predicate(this);
}

void qsqlParser::Not_predicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot_predicate(this);
}


antlrcpp::Any qsqlParser::Not_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitNot_predicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Not_predicateContext* qsqlParser::not_predicate() {
  Not_predicateContext *_localctx = _tracker.createInstance<Not_predicateContext>(_ctx, getState());
  enterRule(_localctx, 10, qsqlParser::RuleNot_predicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(qsqlParser::K_NOT);
    setState(72);
    predicate();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Par_predicateContext ------------------------------------------------------------------

qsqlParser::Par_predicateContext::Par_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qsqlParser::PredicateContext* qsqlParser::Par_predicateContext::predicate() {
  return getRuleContext<qsqlParser::PredicateContext>(0);
}


size_t qsqlParser::Par_predicateContext::getRuleIndex() const {
  return qsqlParser::RulePar_predicate;
}

void qsqlParser::Par_predicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPar_predicate(this);
}

void qsqlParser::Par_predicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPar_predicate(this);
}


antlrcpp::Any qsqlParser::Par_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitPar_predicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Par_predicateContext* qsqlParser::par_predicate() {
  Par_predicateContext *_localctx = _tracker.createInstance<Par_predicateContext>(_ctx, getState());
  enterRule(_localctx, 12, qsqlParser::RulePar_predicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(qsqlParser::T__0);
    setState(75);
    predicate();
    setState(76);
    match(qsqlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_predicateContext ------------------------------------------------------------------

qsqlParser::Qs_predicateContext::Qs_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qsqlParser::Qs_tag_predicateContext* qsqlParser::Qs_predicateContext::qs_tag_predicate() {
  return getRuleContext<qsqlParser::Qs_tag_predicateContext>(0);
}

qsqlParser::Qs_string_predicateContext* qsqlParser::Qs_predicateContext::qs_string_predicate() {
  return getRuleContext<qsqlParser::Qs_string_predicateContext>(0);
}


size_t qsqlParser::Qs_predicateContext::getRuleIndex() const {
  return qsqlParser::RuleQs_predicate;
}

void qsqlParser::Qs_predicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_predicate(this);
}

void qsqlParser::Qs_predicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_predicate(this);
}


antlrcpp::Any qsqlParser::Qs_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_predicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_predicateContext* qsqlParser::qs_predicate() {
  Qs_predicateContext *_localctx = _tracker.createInstance<Qs_predicateContext>(_ctx, getState());
  enterRule(_localctx, 14, qsqlParser::RuleQs_predicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qsqlParser::K_TAG: {
        enterOuterAlt(_localctx, 1);
        setState(78);
        qs_tag_predicate();
        break;
      }

      case qsqlParser::T__0:
      case qsqlParser::IDENTIFIER:
      case qsqlParser::K_NAME:
      case qsqlParser::K_TEXT:
      case qsqlParser::K_TYPE:
      case qsqlParser::K_AUTHOR:
      case qsqlParser::K_SOURCE:
      case qsqlParser::K_URL:
      case qsqlParser::K_GET: {
        enterOuterAlt(_localctx, 2);
        setState(79);
        qs_string_predicate();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_tag_predicateContext ------------------------------------------------------------------

qsqlParser::Qs_tag_predicateContext::Qs_tag_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Qs_tag_predicateContext::K_TAG() {
  return getToken(qsqlParser::K_TAG, 0);
}

qsqlParser::Qs_stringContext* qsqlParser::Qs_tag_predicateContext::qs_string() {
  return getRuleContext<qsqlParser::Qs_stringContext>(0);
}


size_t qsqlParser::Qs_tag_predicateContext::getRuleIndex() const {
  return qsqlParser::RuleQs_tag_predicate;
}

void qsqlParser::Qs_tag_predicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_tag_predicate(this);
}

void qsqlParser::Qs_tag_predicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_tag_predicate(this);
}


antlrcpp::Any qsqlParser::Qs_tag_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_tag_predicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_tag_predicateContext* qsqlParser::qs_tag_predicate() {
  Qs_tag_predicateContext *_localctx = _tracker.createInstance<Qs_tag_predicateContext>(_ctx, getState());
  enterRule(_localctx, 16, qsqlParser::RuleQs_tag_predicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(qsqlParser::K_TAG);
    setState(83);
    qs_string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_string_predicateContext ------------------------------------------------------------------

qsqlParser::Qs_string_predicateContext::Qs_string_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qsqlParser::Qs_string_equal_predicateContext* qsqlParser::Qs_string_predicateContext::qs_string_equal_predicate() {
  return getRuleContext<qsqlParser::Qs_string_equal_predicateContext>(0);
}

qsqlParser::Qs_string_in_predicateContext* qsqlParser::Qs_string_predicateContext::qs_string_in_predicate() {
  return getRuleContext<qsqlParser::Qs_string_in_predicateContext>(0);
}

qsqlParser::Qs_string_match_predicateContext* qsqlParser::Qs_string_predicateContext::qs_string_match_predicate() {
  return getRuleContext<qsqlParser::Qs_string_match_predicateContext>(0);
}


size_t qsqlParser::Qs_string_predicateContext::getRuleIndex() const {
  return qsqlParser::RuleQs_string_predicate;
}

void qsqlParser::Qs_string_predicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_string_predicate(this);
}

void qsqlParser::Qs_string_predicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_string_predicate(this);
}


antlrcpp::Any qsqlParser::Qs_string_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_string_predicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_string_predicateContext* qsqlParser::qs_string_predicate() {
  Qs_string_predicateContext *_localctx = _tracker.createInstance<Qs_string_predicateContext>(_ctx, getState());
  enterRule(_localctx, 18, qsqlParser::RuleQs_string_predicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(85);
      qs_string_equal_predicate();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(86);
      qs_string_in_predicate();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(87);
      qs_string_match_predicate();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_string_equal_predicateContext ------------------------------------------------------------------

qsqlParser::Qs_string_equal_predicateContext::Qs_string_equal_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qsqlParser::Qs_stringContext *> qsqlParser::Qs_string_equal_predicateContext::qs_string() {
  return getRuleContexts<qsqlParser::Qs_stringContext>();
}

qsqlParser::Qs_stringContext* qsqlParser::Qs_string_equal_predicateContext::qs_string(size_t i) {
  return getRuleContext<qsqlParser::Qs_stringContext>(i);
}

tree::TerminalNode* qsqlParser::Qs_string_equal_predicateContext::EQUAL() {
  return getToken(qsqlParser::EQUAL, 0);
}


size_t qsqlParser::Qs_string_equal_predicateContext::getRuleIndex() const {
  return qsqlParser::RuleQs_string_equal_predicate;
}

void qsqlParser::Qs_string_equal_predicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_string_equal_predicate(this);
}

void qsqlParser::Qs_string_equal_predicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_string_equal_predicate(this);
}


antlrcpp::Any qsqlParser::Qs_string_equal_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_string_equal_predicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_string_equal_predicateContext* qsqlParser::qs_string_equal_predicate() {
  Qs_string_equal_predicateContext *_localctx = _tracker.createInstance<Qs_string_equal_predicateContext>(_ctx, getState());
  enterRule(_localctx, 20, qsqlParser::RuleQs_string_equal_predicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    qs_string();
    setState(91);
    match(qsqlParser::EQUAL);
    setState(92);
    qs_string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_string_in_predicateContext ------------------------------------------------------------------

qsqlParser::Qs_string_in_predicateContext::Qs_string_in_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qsqlParser::Qs_stringContext *> qsqlParser::Qs_string_in_predicateContext::qs_string() {
  return getRuleContexts<qsqlParser::Qs_stringContext>();
}

qsqlParser::Qs_stringContext* qsqlParser::Qs_string_in_predicateContext::qs_string(size_t i) {
  return getRuleContext<qsqlParser::Qs_stringContext>(i);
}

tree::TerminalNode* qsqlParser::Qs_string_in_predicateContext::K_IN() {
  return getToken(qsqlParser::K_IN, 0);
}


size_t qsqlParser::Qs_string_in_predicateContext::getRuleIndex() const {
  return qsqlParser::RuleQs_string_in_predicate;
}

void qsqlParser::Qs_string_in_predicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_string_in_predicate(this);
}

void qsqlParser::Qs_string_in_predicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_string_in_predicate(this);
}


antlrcpp::Any qsqlParser::Qs_string_in_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_string_in_predicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_string_in_predicateContext* qsqlParser::qs_string_in_predicate() {
  Qs_string_in_predicateContext *_localctx = _tracker.createInstance<Qs_string_in_predicateContext>(_ctx, getState());
  enterRule(_localctx, 22, qsqlParser::RuleQs_string_in_predicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    qs_string();
    setState(95);
    match(qsqlParser::K_IN);
    setState(96);
    qs_string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_string_match_predicateContext ------------------------------------------------------------------

qsqlParser::Qs_string_match_predicateContext::Qs_string_match_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qsqlParser::Qs_stringContext *> qsqlParser::Qs_string_match_predicateContext::qs_string() {
  return getRuleContexts<qsqlParser::Qs_stringContext>();
}

qsqlParser::Qs_stringContext* qsqlParser::Qs_string_match_predicateContext::qs_string(size_t i) {
  return getRuleContext<qsqlParser::Qs_stringContext>(i);
}

tree::TerminalNode* qsqlParser::Qs_string_match_predicateContext::K_MATCH() {
  return getToken(qsqlParser::K_MATCH, 0);
}


size_t qsqlParser::Qs_string_match_predicateContext::getRuleIndex() const {
  return qsqlParser::RuleQs_string_match_predicate;
}

void qsqlParser::Qs_string_match_predicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_string_match_predicate(this);
}

void qsqlParser::Qs_string_match_predicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_string_match_predicate(this);
}


antlrcpp::Any qsqlParser::Qs_string_match_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_string_match_predicate(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_string_match_predicateContext* qsqlParser::qs_string_match_predicate() {
  Qs_string_match_predicateContext *_localctx = _tracker.createInstance<Qs_string_match_predicateContext>(_ctx, getState());
  enterRule(_localctx, 24, qsqlParser::RuleQs_string_match_predicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    qs_string();
    setState(99);
    match(qsqlParser::K_MATCH);
    setState(100);
    qs_string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_string_with_parenthesisContext ------------------------------------------------------------------

qsqlParser::Qs_string_with_parenthesisContext::Qs_string_with_parenthesisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qsqlParser::Qs_stringContext* qsqlParser::Qs_string_with_parenthesisContext::qs_string() {
  return getRuleContext<qsqlParser::Qs_stringContext>(0);
}


size_t qsqlParser::Qs_string_with_parenthesisContext::getRuleIndex() const {
  return qsqlParser::RuleQs_string_with_parenthesis;
}

void qsqlParser::Qs_string_with_parenthesisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_string_with_parenthesis(this);
}

void qsqlParser::Qs_string_with_parenthesisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_string_with_parenthesis(this);
}


antlrcpp::Any qsqlParser::Qs_string_with_parenthesisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_string_with_parenthesis(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_string_with_parenthesisContext* qsqlParser::qs_string_with_parenthesis() {
  Qs_string_with_parenthesisContext *_localctx = _tracker.createInstance<Qs_string_with_parenthesisContext>(_ctx, getState());
  enterRule(_localctx, 26, qsqlParser::RuleQs_string_with_parenthesis);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(qsqlParser::T__0);
    setState(103);
    qs_string();
    setState(104);
    match(qsqlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_stringContext ------------------------------------------------------------------

qsqlParser::Qs_stringContext::Qs_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qsqlParser::Qs_string_with_parenthesisContext* qsqlParser::Qs_stringContext::qs_string_with_parenthesis() {
  return getRuleContext<qsqlParser::Qs_string_with_parenthesisContext>(0);
}

qsqlParser::Qs_get_item_nameContext* qsqlParser::Qs_stringContext::qs_get_item_name() {
  return getRuleContext<qsqlParser::Qs_get_item_nameContext>(0);
}

qsqlParser::Qs_get_item_textContext* qsqlParser::Qs_stringContext::qs_get_item_text() {
  return getRuleContext<qsqlParser::Qs_get_item_textContext>(0);
}

qsqlParser::Qs_get_item_typeContext* qsqlParser::Qs_stringContext::qs_get_item_type() {
  return getRuleContext<qsqlParser::Qs_get_item_typeContext>(0);
}

qsqlParser::Qs_get_item_authorContext* qsqlParser::Qs_stringContext::qs_get_item_author() {
  return getRuleContext<qsqlParser::Qs_get_item_authorContext>(0);
}

qsqlParser::Qs_get_item_source_titleContext* qsqlParser::Qs_stringContext::qs_get_item_source_title() {
  return getRuleContext<qsqlParser::Qs_get_item_source_titleContext>(0);
}

qsqlParser::Qs_get_item_source_urlContext* qsqlParser::Qs_stringContext::qs_get_item_source_url() {
  return getRuleContext<qsqlParser::Qs_get_item_source_urlContext>(0);
}

qsqlParser::Qs_get_tag_valueContext* qsqlParser::Qs_stringContext::qs_get_tag_value() {
  return getRuleContext<qsqlParser::Qs_get_tag_valueContext>(0);
}

qsqlParser::Qs_identifierContext* qsqlParser::Qs_stringContext::qs_identifier() {
  return getRuleContext<qsqlParser::Qs_identifierContext>(0);
}


size_t qsqlParser::Qs_stringContext::getRuleIndex() const {
  return qsqlParser::RuleQs_string;
}

void qsqlParser::Qs_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_string(this);
}

void qsqlParser::Qs_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_string(this);
}


antlrcpp::Any qsqlParser::Qs_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_string(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_stringContext* qsqlParser::qs_string() {
  Qs_stringContext *_localctx = _tracker.createInstance<Qs_stringContext>(_ctx, getState());
  enterRule(_localctx, 28, qsqlParser::RuleQs_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qsqlParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(106);
        qs_string_with_parenthesis();
        break;
      }

      case qsqlParser::K_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(107);
        qs_get_item_name();
        break;
      }

      case qsqlParser::K_TEXT: {
        enterOuterAlt(_localctx, 3);
        setState(108);
        qs_get_item_text();
        break;
      }

      case qsqlParser::K_TYPE: {
        enterOuterAlt(_localctx, 4);
        setState(109);
        qs_get_item_type();
        break;
      }

      case qsqlParser::K_AUTHOR: {
        enterOuterAlt(_localctx, 5);
        setState(110);
        qs_get_item_author();
        break;
      }

      case qsqlParser::K_SOURCE: {
        enterOuterAlt(_localctx, 6);
        setState(111);
        qs_get_item_source_title();
        break;
      }

      case qsqlParser::K_URL: {
        enterOuterAlt(_localctx, 7);
        setState(112);
        qs_get_item_source_url();
        break;
      }

      case qsqlParser::K_GET: {
        enterOuterAlt(_localctx, 8);
        setState(113);
        qs_get_tag_value();
        break;
      }

      case qsqlParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 9);
        setState(114);
        qs_identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_get_item_nameContext ------------------------------------------------------------------

qsqlParser::Qs_get_item_nameContext::Qs_get_item_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Qs_get_item_nameContext::K_NAME() {
  return getToken(qsqlParser::K_NAME, 0);
}


size_t qsqlParser::Qs_get_item_nameContext::getRuleIndex() const {
  return qsqlParser::RuleQs_get_item_name;
}

void qsqlParser::Qs_get_item_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_get_item_name(this);
}

void qsqlParser::Qs_get_item_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_get_item_name(this);
}


antlrcpp::Any qsqlParser::Qs_get_item_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_get_item_name(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_get_item_nameContext* qsqlParser::qs_get_item_name() {
  Qs_get_item_nameContext *_localctx = _tracker.createInstance<Qs_get_item_nameContext>(_ctx, getState());
  enterRule(_localctx, 30, qsqlParser::RuleQs_get_item_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(qsqlParser::K_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_get_item_textContext ------------------------------------------------------------------

qsqlParser::Qs_get_item_textContext::Qs_get_item_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Qs_get_item_textContext::K_TEXT() {
  return getToken(qsqlParser::K_TEXT, 0);
}


size_t qsqlParser::Qs_get_item_textContext::getRuleIndex() const {
  return qsqlParser::RuleQs_get_item_text;
}

void qsqlParser::Qs_get_item_textContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_get_item_text(this);
}

void qsqlParser::Qs_get_item_textContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_get_item_text(this);
}


antlrcpp::Any qsqlParser::Qs_get_item_textContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_get_item_text(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_get_item_textContext* qsqlParser::qs_get_item_text() {
  Qs_get_item_textContext *_localctx = _tracker.createInstance<Qs_get_item_textContext>(_ctx, getState());
  enterRule(_localctx, 32, qsqlParser::RuleQs_get_item_text);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(qsqlParser::K_TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_get_item_typeContext ------------------------------------------------------------------

qsqlParser::Qs_get_item_typeContext::Qs_get_item_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Qs_get_item_typeContext::K_TYPE() {
  return getToken(qsqlParser::K_TYPE, 0);
}


size_t qsqlParser::Qs_get_item_typeContext::getRuleIndex() const {
  return qsqlParser::RuleQs_get_item_type;
}

void qsqlParser::Qs_get_item_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_get_item_type(this);
}

void qsqlParser::Qs_get_item_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_get_item_type(this);
}


antlrcpp::Any qsqlParser::Qs_get_item_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_get_item_type(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_get_item_typeContext* qsqlParser::qs_get_item_type() {
  Qs_get_item_typeContext *_localctx = _tracker.createInstance<Qs_get_item_typeContext>(_ctx, getState());
  enterRule(_localctx, 34, qsqlParser::RuleQs_get_item_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(qsqlParser::K_TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_get_item_authorContext ------------------------------------------------------------------

qsqlParser::Qs_get_item_authorContext::Qs_get_item_authorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Qs_get_item_authorContext::K_AUTHOR() {
  return getToken(qsqlParser::K_AUTHOR, 0);
}


size_t qsqlParser::Qs_get_item_authorContext::getRuleIndex() const {
  return qsqlParser::RuleQs_get_item_author;
}

void qsqlParser::Qs_get_item_authorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_get_item_author(this);
}

void qsqlParser::Qs_get_item_authorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_get_item_author(this);
}


antlrcpp::Any qsqlParser::Qs_get_item_authorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_get_item_author(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_get_item_authorContext* qsqlParser::qs_get_item_author() {
  Qs_get_item_authorContext *_localctx = _tracker.createInstance<Qs_get_item_authorContext>(_ctx, getState());
  enterRule(_localctx, 36, qsqlParser::RuleQs_get_item_author);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(qsqlParser::K_AUTHOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_get_item_source_titleContext ------------------------------------------------------------------

qsqlParser::Qs_get_item_source_titleContext::Qs_get_item_source_titleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Qs_get_item_source_titleContext::K_SOURCE() {
  return getToken(qsqlParser::K_SOURCE, 0);
}


size_t qsqlParser::Qs_get_item_source_titleContext::getRuleIndex() const {
  return qsqlParser::RuleQs_get_item_source_title;
}

void qsqlParser::Qs_get_item_source_titleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_get_item_source_title(this);
}

void qsqlParser::Qs_get_item_source_titleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_get_item_source_title(this);
}


antlrcpp::Any qsqlParser::Qs_get_item_source_titleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_get_item_source_title(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_get_item_source_titleContext* qsqlParser::qs_get_item_source_title() {
  Qs_get_item_source_titleContext *_localctx = _tracker.createInstance<Qs_get_item_source_titleContext>(_ctx, getState());
  enterRule(_localctx, 38, qsqlParser::RuleQs_get_item_source_title);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(qsqlParser::K_SOURCE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_get_item_source_urlContext ------------------------------------------------------------------

qsqlParser::Qs_get_item_source_urlContext::Qs_get_item_source_urlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Qs_get_item_source_urlContext::K_URL() {
  return getToken(qsqlParser::K_URL, 0);
}


size_t qsqlParser::Qs_get_item_source_urlContext::getRuleIndex() const {
  return qsqlParser::RuleQs_get_item_source_url;
}

void qsqlParser::Qs_get_item_source_urlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_get_item_source_url(this);
}

void qsqlParser::Qs_get_item_source_urlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_get_item_source_url(this);
}


antlrcpp::Any qsqlParser::Qs_get_item_source_urlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_get_item_source_url(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_get_item_source_urlContext* qsqlParser::qs_get_item_source_url() {
  Qs_get_item_source_urlContext *_localctx = _tracker.createInstance<Qs_get_item_source_urlContext>(_ctx, getState());
  enterRule(_localctx, 40, qsqlParser::RuleQs_get_item_source_url);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(qsqlParser::K_URL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_get_tag_valueContext ------------------------------------------------------------------

qsqlParser::Qs_get_tag_valueContext::Qs_get_tag_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Qs_get_tag_valueContext::K_GET() {
  return getToken(qsqlParser::K_GET, 0);
}

qsqlParser::Qs_stringContext* qsqlParser::Qs_get_tag_valueContext::qs_string() {
  return getRuleContext<qsqlParser::Qs_stringContext>(0);
}


size_t qsqlParser::Qs_get_tag_valueContext::getRuleIndex() const {
  return qsqlParser::RuleQs_get_tag_value;
}

void qsqlParser::Qs_get_tag_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_get_tag_value(this);
}

void qsqlParser::Qs_get_tag_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_get_tag_value(this);
}


antlrcpp::Any qsqlParser::Qs_get_tag_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_get_tag_value(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_get_tag_valueContext* qsqlParser::qs_get_tag_value() {
  Qs_get_tag_valueContext *_localctx = _tracker.createInstance<Qs_get_tag_valueContext>(_ctx, getState());
  enterRule(_localctx, 42, qsqlParser::RuleQs_get_tag_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(129);
      match(qsqlParser::K_GET);
      setState(130);
      qs_string();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      match(qsqlParser::K_GET);
      setState(132);
      match(qsqlParser::T__0);
      setState(133);
      qs_string();
      setState(134);
      match(qsqlParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qs_identifierContext ------------------------------------------------------------------

qsqlParser::Qs_identifierContext::Qs_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qsqlParser::Qs_identifierContext::IDENTIFIER() {
  return getToken(qsqlParser::IDENTIFIER, 0);
}


size_t qsqlParser::Qs_identifierContext::getRuleIndex() const {
  return qsqlParser::RuleQs_identifier;
}

void qsqlParser::Qs_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQs_identifier(this);
}

void qsqlParser::Qs_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qsqlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQs_identifier(this);
}


antlrcpp::Any qsqlParser::Qs_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<qsqlVisitor*>(visitor))
    return parserVisitor->visitQs_identifier(this);
  else
    return visitor->visitChildren(this);
}

qsqlParser::Qs_identifierContext* qsqlParser::qs_identifier() {
  Qs_identifierContext *_localctx = _tracker.createInstance<Qs_identifierContext>(_ctx, getState());
  enterRule(_localctx, 44, qsqlParser::RuleQs_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(qsqlParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> qsqlParser::_decisionToDFA;
atn::PredictionContextCache qsqlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN qsqlParser::_atn;
std::vector<uint16_t> qsqlParser::_serializedATN;

std::vector<std::string> qsqlParser::_ruleNames = {
  "start", "qsql_query", "predicate", "or_predicate", "and_predicate", "not_predicate", 
  "par_predicate", "qs_predicate", "qs_tag_predicate", "qs_string_predicate", 
  "qs_string_equal_predicate", "qs_string_in_predicate", "qs_string_match_predicate", 
  "qs_string_with_parenthesis", "qs_string", "qs_get_item_name", "qs_get_item_text", 
  "qs_get_item_type", "qs_get_item_author", "qs_get_item_source_title", 
  "qs_get_item_source_url", "qs_get_tag_value", "qs_identifier"
};

std::vector<std::string> qsqlParser::_literalNames = {
  "", "'('", "')'", "", "'='", "", "'~'"
};

std::vector<std::string> qsqlParser::_symbolicNames = {
  "", "", "", "IDENTIFIER", "EQUAL", "K_IN", "K_MATCH", "K_NAME", "K_TEXT", 
  "K_TYPE", "K_AUTHOR", "K_SOURCE", "K_URL", "K_GET", "K_TAG", "K_NOT", 
  "K_AND", "K_OR", "K_FROM", "K_TILL", "K_WHERE", "SPACES"
};

dfa::Vocabulary qsqlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> qsqlParser::_tokenNames;

qsqlParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x430, 0xd6d1, 0x8206, 0xad2d, 0x4417, 0xaef1, 0x8d80, 0xaadd, 
    0x3, 0x17, 0x8f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3c, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0x53, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0x5b, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0x76, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x8b, 0xa, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x2, 0x2, 0x19, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x2, 0x2, 0x87, 0x2, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x33, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x43, 0x3, 0x2, 0x2, 0x2, 0xc, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x54, 0x3, 0x2, 0x2, 0x2, 0x14, 0x5a, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x18, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x64, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x68, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x75, 0x3, 0x2, 0x2, 0x2, 0x20, 0x77, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x24, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x26, 0x7d, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x31, 0x5, 0x4, 0x3, 0x2, 0x31, 0x32, 0x7, 0x2, 0x2, 
    0x3, 0x32, 0x3, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x7, 0x16, 0x2, 0x2, 
    0x34, 0x35, 0x5, 0x6, 0x4, 0x2, 0x35, 0x5, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x3c, 0x5, 0x8, 0x5, 0x2, 0x37, 0x3c, 0x5, 0xa, 0x6, 0x2, 0x38, 0x3c, 
    0x5, 0xc, 0x7, 0x2, 0x39, 0x3c, 0x5, 0xe, 0x8, 0x2, 0x3a, 0x3c, 0x5, 
    0x10, 0x9, 0x2, 0x3b, 0x36, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x3e, 0x7, 0x3, 0x2, 0x2, 0x3e, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3f, 
    0x40, 0x7, 0x13, 0x2, 0x2, 0x40, 0x41, 0x5, 0x6, 0x4, 0x2, 0x41, 0x42, 
    0x7, 0x4, 0x2, 0x2, 0x42, 0x9, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x7, 
    0x3, 0x2, 0x2, 0x44, 0x45, 0x5, 0x6, 0x4, 0x2, 0x45, 0x46, 0x7, 0x12, 
    0x2, 0x2, 0x46, 0x47, 0x5, 0x6, 0x4, 0x2, 0x47, 0x48, 0x7, 0x4, 0x2, 
    0x2, 0x48, 0xb, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x11, 0x2, 0x2, 
    0x4a, 0x4b, 0x5, 0x6, 0x4, 0x2, 0x4b, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4d, 0x7, 0x3, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x6, 0x4, 0x2, 0x4e, 0x4f, 
    0x7, 0x4, 0x2, 0x2, 0x4f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x5, 
    0x12, 0xa, 0x2, 0x51, 0x53, 0x5, 0x14, 0xb, 0x2, 0x52, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x55, 0x7, 0x10, 0x2, 0x2, 0x55, 0x56, 0x5, 0x1e, 0x10, 0x2, 
    0x56, 0x13, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5b, 0x5, 0x16, 0xc, 0x2, 0x58, 
    0x5b, 0x5, 0x18, 0xd, 0x2, 0x59, 0x5b, 0x5, 0x1a, 0xe, 0x2, 0x5a, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0x1e, 
    0x10, 0x2, 0x5d, 0x5e, 0x7, 0x6, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x1e, 0x10, 
    0x2, 0x5f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x5, 0x1e, 0x10, 0x2, 
    0x61, 0x62, 0x7, 0x7, 0x2, 0x2, 0x62, 0x63, 0x5, 0x1e, 0x10, 0x2, 0x63, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x5, 0x1e, 0x10, 0x2, 0x65, 0x66, 
    0x7, 0x8, 0x2, 0x2, 0x66, 0x67, 0x5, 0x1e, 0x10, 0x2, 0x67, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x3, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x1e, 
    0x10, 0x2, 0x6a, 0x6b, 0x7, 0x4, 0x2, 0x2, 0x6b, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x76, 0x5, 0x1c, 0xf, 0x2, 0x6d, 0x76, 0x5, 0x20, 0x11, 0x2, 
    0x6e, 0x76, 0x5, 0x22, 0x12, 0x2, 0x6f, 0x76, 0x5, 0x24, 0x13, 0x2, 
    0x70, 0x76, 0x5, 0x26, 0x14, 0x2, 0x71, 0x76, 0x5, 0x28, 0x15, 0x2, 
    0x72, 0x76, 0x5, 0x2a, 0x16, 0x2, 0x73, 0x76, 0x5, 0x2c, 0x17, 0x2, 
    0x74, 0x76, 0x5, 0x2e, 0x18, 0x2, 0x75, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x75, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x75, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0x70, 0x3, 0x2, 0x2, 0x2, 0x75, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x77, 0x78, 0x7, 0x9, 0x2, 0x2, 0x78, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x79, 0x7a, 0x7, 0xa, 0x2, 0x2, 0x7a, 0x23, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x7c, 0x7, 0xb, 0x2, 0x2, 0x7c, 0x25, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 
    0x7, 0xc, 0x2, 0x2, 0x7e, 0x27, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 
    0xd, 0x2, 0x2, 0x80, 0x29, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0xe, 
    0x2, 0x2, 0x82, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0xf, 0x2, 
    0x2, 0x84, 0x8b, 0x5, 0x1e, 0x10, 0x2, 0x85, 0x86, 0x7, 0xf, 0x2, 0x2, 
    0x86, 0x87, 0x7, 0x3, 0x2, 0x2, 0x87, 0x88, 0x5, 0x1e, 0x10, 0x2, 0x88, 
    0x89, 0x7, 0x4, 0x2, 0x2, 0x89, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x5, 0x2, 0x2, 0x8d, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x7, 0x3b, 0x52, 0x5a, 0x75, 0x8a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

qsqlParser::Initializer qsqlParser::_init;
