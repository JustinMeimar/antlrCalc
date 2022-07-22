
// Generated from Lite.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "LiteVisitor.h"


/**
 * This class provides an empty implementation of LiteVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LiteBaseVisitor : public LiteVisitor {
public:

  virtual std::any visitProg(LiteParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatExpr(LiteParser::StatExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatAssignExpr(LiteParser::StatAssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatNewLine(LiteParser::StatNewLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprINT(LiteParser::ExprINTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprParen(LiteParser::ExprParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprNegate(LiteParser::ExprNegateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprAddSub(LiteParser::ExprAddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprID(LiteParser::ExprIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprMulDiv(LiteParser::ExprMulDivContext *ctx) override {
    return visitChildren(ctx);
  }


};

