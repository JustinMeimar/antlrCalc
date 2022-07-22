
// Generated from Lite.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "LiteParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LiteParser.
 */
class  LiteVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LiteParser.
   */
    virtual std::any visitProg(LiteParser::ProgContext *context) = 0;

    virtual std::any visitStatExpr(LiteParser::StatExprContext *context) = 0;

    virtual std::any visitStatAssignExpr(LiteParser::StatAssignExprContext *context) = 0;

    virtual std::any visitStatNewLine(LiteParser::StatNewLineContext *context) = 0;

    virtual std::any visitExprINT(LiteParser::ExprINTContext *context) = 0;

    virtual std::any visitExprParen(LiteParser::ExprParenContext *context) = 0;

    virtual std::any visitExprNegate(LiteParser::ExprNegateContext *context) = 0;

    virtual std::any visitExprAddSub(LiteParser::ExprAddSubContext *context) = 0;

    virtual std::any visitExprID(LiteParser::ExprIDContext *context) = 0;

    virtual std::any visitExprMulDiv(LiteParser::ExprMulDivContext *context) = 0;


};

