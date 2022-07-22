
// Generated from Lite.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "LiteListener.h"


/**
 * This class provides an empty implementation of LiteListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LiteBaseListener : public LiteListener {
public:

  virtual void enterProg(LiteParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(LiteParser::ProgContext * /*ctx*/) override { }

  virtual void enterStatExpr(LiteParser::StatExprContext * /*ctx*/) override { }
  virtual void exitStatExpr(LiteParser::StatExprContext * /*ctx*/) override { }

  virtual void enterStatAssignExpr(LiteParser::StatAssignExprContext * /*ctx*/) override { }
  virtual void exitStatAssignExpr(LiteParser::StatAssignExprContext * /*ctx*/) override { }

  virtual void enterStatNewLine(LiteParser::StatNewLineContext * /*ctx*/) override { }
  virtual void exitStatNewLine(LiteParser::StatNewLineContext * /*ctx*/) override { }

  virtual void enterExprINT(LiteParser::ExprINTContext * /*ctx*/) override { }
  virtual void exitExprINT(LiteParser::ExprINTContext * /*ctx*/) override { }

  virtual void enterExprParen(LiteParser::ExprParenContext * /*ctx*/) override { }
  virtual void exitExprParen(LiteParser::ExprParenContext * /*ctx*/) override { }

  virtual void enterExprNegate(LiteParser::ExprNegateContext * /*ctx*/) override { }
  virtual void exitExprNegate(LiteParser::ExprNegateContext * /*ctx*/) override { }

  virtual void enterExprAddSub(LiteParser::ExprAddSubContext * /*ctx*/) override { }
  virtual void exitExprAddSub(LiteParser::ExprAddSubContext * /*ctx*/) override { }

  virtual void enterExprID(LiteParser::ExprIDContext * /*ctx*/) override { }
  virtual void exitExprID(LiteParser::ExprIDContext * /*ctx*/) override { }

  virtual void enterExprMulDiv(LiteParser::ExprMulDivContext * /*ctx*/) override { }
  virtual void exitExprMulDiv(LiteParser::ExprMulDivContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

