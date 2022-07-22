
// Generated from Lite.g4 by ANTLR 4.10.1


#include "LiteListener.h"
#include "LiteVisitor.h"

#include "LiteParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LiteParserStaticData final {
  LiteParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LiteParserStaticData(const LiteParserStaticData&) = delete;
  LiteParserStaticData(LiteParserStaticData&&) = delete;
  LiteParserStaticData& operator=(const LiteParserStaticData&) = delete;
  LiteParserStaticData& operator=(LiteParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag liteParserOnceFlag;
LiteParserStaticData *liteParserStaticData = nullptr;

void liteParserInitialize() {
  assert(liteParserStaticData == nullptr);
  auto staticData = std::make_unique<LiteParserStaticData>(
    std::vector<std::string>{
      "prog", "stat", "expr"
    },
    std::vector<std::string>{
      "", "'='", "'-'", "'+'", "'*'", "'/'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "ID", "INT", "NL"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,10,45,2,0,7,0,2,1,7,1,2,2,7,2,1,0,4,0,8,8,0,11,0,12,0,9,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,21,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,3,2,32,8,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,40,8,2,10,2,12,2,43,9,2,1,
  	2,0,1,4,3,0,2,4,0,2,1,0,2,3,1,0,4,5,49,0,7,1,0,0,0,2,20,1,0,0,0,4,31,
  	1,0,0,0,6,8,3,2,1,0,7,6,1,0,0,0,8,9,1,0,0,0,9,7,1,0,0,0,9,10,1,0,0,0,
  	10,1,1,0,0,0,11,12,3,4,2,0,12,13,5,10,0,0,13,21,1,0,0,0,14,15,5,8,0,0,
  	15,16,5,1,0,0,16,17,3,4,2,0,17,18,5,10,0,0,18,21,1,0,0,0,19,21,5,10,0,
  	0,20,11,1,0,0,0,20,14,1,0,0,0,20,19,1,0,0,0,21,3,1,0,0,0,22,23,6,2,-1,
  	0,23,24,5,2,0,0,24,32,3,4,2,6,25,26,5,6,0,0,26,27,3,4,2,0,27,28,5,7,0,
  	0,28,32,1,0,0,0,29,32,5,9,0,0,30,32,5,8,0,0,31,22,1,0,0,0,31,25,1,0,0,
  	0,31,29,1,0,0,0,31,30,1,0,0,0,32,41,1,0,0,0,33,34,10,5,0,0,34,35,7,0,
  	0,0,35,40,3,4,2,6,36,37,10,4,0,0,37,38,7,1,0,0,38,40,3,4,2,5,39,33,1,
  	0,0,0,39,36,1,0,0,0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,5,1,
  	0,0,0,43,41,1,0,0,0,5,9,20,31,39,41
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  liteParserStaticData = staticData.release();
}

}

LiteParser::LiteParser(TokenStream *input) : LiteParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LiteParser::LiteParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LiteParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *liteParserStaticData->atn, liteParserStaticData->decisionToDFA, liteParserStaticData->sharedContextCache, options);
}

LiteParser::~LiteParser() {
  delete _interpreter;
}

const atn::ATN& LiteParser::getATN() const {
  return *liteParserStaticData->atn;
}

std::string LiteParser::getGrammarFileName() const {
  return "Lite.g4";
}

const std::vector<std::string>& LiteParser::getRuleNames() const {
  return liteParserStaticData->ruleNames;
}

const dfa::Vocabulary& LiteParser::getVocabulary() const {
  return liteParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LiteParser::getSerializedATN() const {
  return liteParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

LiteParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LiteParser::StatContext *> LiteParser::ProgContext::stat() {
  return getRuleContexts<LiteParser::StatContext>();
}

LiteParser::StatContext* LiteParser::ProgContext::stat(size_t i) {
  return getRuleContext<LiteParser::StatContext>(i);
}


size_t LiteParser::ProgContext::getRuleIndex() const {
  return LiteParser::RuleProg;
}

void LiteParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void LiteParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


std::any LiteParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LiteVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

LiteParser::ProgContext* LiteParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, LiteParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      stat();
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LiteParser::T__1)
      | (1ULL << LiteParser::T__5)
      | (1ULL << LiteParser::ID)
      | (1ULL << LiteParser::INT)
      | (1ULL << LiteParser::NL))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

LiteParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LiteParser::StatContext::getRuleIndex() const {
  return LiteParser::RuleStat;
}

void LiteParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatAssignExprContext ------------------------------------------------------------------

tree::TerminalNode* LiteParser::StatAssignExprContext::ID() {
  return getToken(LiteParser::ID, 0);
}

LiteParser::ExprContext* LiteParser::StatAssignExprContext::expr() {
  return getRuleContext<LiteParser::ExprContext>(0);
}

tree::TerminalNode* LiteParser::StatAssignExprContext::NL() {
  return getToken(LiteParser::NL, 0);
}

LiteParser::StatAssignExprContext::StatAssignExprContext(StatContext *ctx) { copyFrom(ctx); }

void LiteParser::StatAssignExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatAssignExpr(this);
}
void LiteParser::StatAssignExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatAssignExpr(this);
}

std::any LiteParser::StatAssignExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LiteVisitor*>(visitor))
    return parserVisitor->visitStatAssignExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatExprContext ------------------------------------------------------------------

LiteParser::ExprContext* LiteParser::StatExprContext::expr() {
  return getRuleContext<LiteParser::ExprContext>(0);
}

tree::TerminalNode* LiteParser::StatExprContext::NL() {
  return getToken(LiteParser::NL, 0);
}

LiteParser::StatExprContext::StatExprContext(StatContext *ctx) { copyFrom(ctx); }

void LiteParser::StatExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatExpr(this);
}
void LiteParser::StatExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatExpr(this);
}

std::any LiteParser::StatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LiteVisitor*>(visitor))
    return parserVisitor->visitStatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatNewLineContext ------------------------------------------------------------------

tree::TerminalNode* LiteParser::StatNewLineContext::NL() {
  return getToken(LiteParser::NL, 0);
}

LiteParser::StatNewLineContext::StatNewLineContext(StatContext *ctx) { copyFrom(ctx); }

void LiteParser::StatNewLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatNewLine(this);
}
void LiteParser::StatNewLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatNewLine(this);
}

std::any LiteParser::StatNewLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LiteVisitor*>(visitor))
    return parserVisitor->visitStatNewLine(this);
  else
    return visitor->visitChildren(this);
}
LiteParser::StatContext* LiteParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, LiteParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(20);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LiteParser::StatExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(11);
      expr(0);
      setState(12);
      match(LiteParser::NL);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LiteParser::StatAssignExprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(14);
      match(LiteParser::ID);
      setState(15);
      match(LiteParser::T__0);
      setState(16);
      expr(0);
      setState(17);
      match(LiteParser::NL);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<LiteParser::StatNewLineContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(19);
      match(LiteParser::NL);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

LiteParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LiteParser::ExprContext::getRuleIndex() const {
  return LiteParser::RuleExpr;
}

void LiteParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprINTContext ------------------------------------------------------------------

tree::TerminalNode* LiteParser::ExprINTContext::INT() {
  return getToken(LiteParser::INT, 0);
}

LiteParser::ExprINTContext::ExprINTContext(ExprContext *ctx) { copyFrom(ctx); }

void LiteParser::ExprINTContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprINT(this);
}
void LiteParser::ExprINTContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprINT(this);
}

std::any LiteParser::ExprINTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LiteVisitor*>(visitor))
    return parserVisitor->visitExprINT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprParenContext ------------------------------------------------------------------

LiteParser::ExprContext* LiteParser::ExprParenContext::expr() {
  return getRuleContext<LiteParser::ExprContext>(0);
}

LiteParser::ExprParenContext::ExprParenContext(ExprContext *ctx) { copyFrom(ctx); }

void LiteParser::ExprParenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprParen(this);
}
void LiteParser::ExprParenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprParen(this);
}

std::any LiteParser::ExprParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LiteVisitor*>(visitor))
    return parserVisitor->visitExprParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprNegateContext ------------------------------------------------------------------

LiteParser::ExprContext* LiteParser::ExprNegateContext::expr() {
  return getRuleContext<LiteParser::ExprContext>(0);
}

LiteParser::ExprNegateContext::ExprNegateContext(ExprContext *ctx) { copyFrom(ctx); }

void LiteParser::ExprNegateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprNegate(this);
}
void LiteParser::ExprNegateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprNegate(this);
}

std::any LiteParser::ExprNegateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LiteVisitor*>(visitor))
    return parserVisitor->visitExprNegate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprAddSubContext ------------------------------------------------------------------

std::vector<LiteParser::ExprContext *> LiteParser::ExprAddSubContext::expr() {
  return getRuleContexts<LiteParser::ExprContext>();
}

LiteParser::ExprContext* LiteParser::ExprAddSubContext::expr(size_t i) {
  return getRuleContext<LiteParser::ExprContext>(i);
}

LiteParser::ExprAddSubContext::ExprAddSubContext(ExprContext *ctx) { copyFrom(ctx); }

void LiteParser::ExprAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprAddSub(this);
}
void LiteParser::ExprAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprAddSub(this);
}

std::any LiteParser::ExprAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LiteVisitor*>(visitor))
    return parserVisitor->visitExprAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprIDContext ------------------------------------------------------------------

tree::TerminalNode* LiteParser::ExprIDContext::ID() {
  return getToken(LiteParser::ID, 0);
}

LiteParser::ExprIDContext::ExprIDContext(ExprContext *ctx) { copyFrom(ctx); }

void LiteParser::ExprIDContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprID(this);
}
void LiteParser::ExprIDContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprID(this);
}

std::any LiteParser::ExprIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LiteVisitor*>(visitor))
    return parserVisitor->visitExprID(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprMulDivContext ------------------------------------------------------------------

std::vector<LiteParser::ExprContext *> LiteParser::ExprMulDivContext::expr() {
  return getRuleContexts<LiteParser::ExprContext>();
}

LiteParser::ExprContext* LiteParser::ExprMulDivContext::expr(size_t i) {
  return getRuleContext<LiteParser::ExprContext>(i);
}

LiteParser::ExprMulDivContext::ExprMulDivContext(ExprContext *ctx) { copyFrom(ctx); }

void LiteParser::ExprMulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprMulDiv(this);
}
void LiteParser::ExprMulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprMulDiv(this);
}

std::any LiteParser::ExprMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LiteVisitor*>(visitor))
    return parserVisitor->visitExprMulDiv(this);
  else
    return visitor->visitChildren(this);
}

LiteParser::ExprContext* LiteParser::expr() {
   return expr(0);
}

LiteParser::ExprContext* LiteParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LiteParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  LiteParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, LiteParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LiteParser::T__1: {
        _localctx = _tracker.createInstance<ExprNegateContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(23);
        match(LiteParser::T__1);
        setState(24);
        expr(6);
        break;
      }

      case LiteParser::T__5: {
        _localctx = _tracker.createInstance<ExprParenContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(25);
        match(LiteParser::T__5);
        setState(26);
        expr(0);
        setState(27);
        match(LiteParser::T__6);
        break;
      }

      case LiteParser::INT: {
        _localctx = _tracker.createInstance<ExprINTContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(29);
        match(LiteParser::INT);
        break;
      }

      case LiteParser::ID: {
        _localctx = _tracker.createInstance<ExprIDContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(30);
        match(LiteParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(41);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(39);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExprAddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(33);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(34);
          _la = _input->LA(1);
          if (!(_la == LiteParser::T__1

          || _la == LiteParser::T__2)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(35);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExprMulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(36);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(37);
          _la = _input->LA(1);
          if (!(_la == LiteParser::T__3

          || _la == LiteParser::T__4)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(38);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(43);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool LiteParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LiteParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void LiteParser::initialize() {
  std::call_once(liteParserOnceFlag, liteParserInitialize);
}
