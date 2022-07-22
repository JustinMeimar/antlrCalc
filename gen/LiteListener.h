
// Generated from Lite.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "LiteParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LiteParser.
 */
class  LiteListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(LiteParser::ProgContext *ctx) = 0;
  virtual void exitProg(LiteParser::ProgContext *ctx) = 0;

  virtual void enterStatExpr(LiteParser::StatExprContext *ctx) = 0;
  virtual void exitStatExpr(LiteParser::StatExprContext *ctx) = 0;

  virtual void enterStatAssignExpr(LiteParser::StatAssignExprContext *ctx) = 0;
  virtual void exitStatAssignExpr(LiteParser::StatAssignExprContext *ctx) = 0;

  virtual void enterStatNewLine(LiteParser::StatNewLineContext *ctx) = 0;
  virtual void exitStatNewLine(LiteParser::StatNewLineContext *ctx) = 0;

  virtual void enterExprINT(LiteParser::ExprINTContext *ctx) = 0;
  virtual void exitExprINT(LiteParser::ExprINTContext *ctx) = 0;

  virtual void enterExprParen(LiteParser::ExprParenContext *ctx) = 0;
  virtual void exitExprParen(LiteParser::ExprParenContext *ctx) = 0;

  virtual void enterExprNegate(LiteParser::ExprNegateContext *ctx) = 0;
  virtual void exitExprNegate(LiteParser::ExprNegateContext *ctx) = 0;

  virtual void enterExprAddSub(LiteParser::ExprAddSubContext *ctx) = 0;
  virtual void exitExprAddSub(LiteParser::ExprAddSubContext *ctx) = 0;

  virtual void enterExprID(LiteParser::ExprIDContext *ctx) = 0;
  virtual void exitExprID(LiteParser::ExprIDContext *ctx) = 0;

  virtual void enterExprMulDiv(LiteParser::ExprMulDivContext *ctx) = 0;
  virtual void exitExprMulDiv(LiteParser::ExprMulDivContext *ctx) = 0;


};

