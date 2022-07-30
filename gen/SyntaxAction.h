#pragma once

#include "antlr4-runtime.h"
#include "LiteBaseListener.h"

class SyntaxAction : public LiteBaseListener {
    public:
        //void enterProg(LiteParser::ProgContext* ctx) override; 
        //void enterExprAddSub(LiteParser::ExprAddSubContext* ctx) override; 
        //void enterExprID(LiteParser::ExprIDContext* ctx) override;
        void enterProg(LiteParser::ProgContext* ctx) override;
        //void exitProg(LiteParser::ProgContext * ctx) override;

        void enterStatExpr(LiteParser::StatExprContext* ctx) override;
        //void exitStatExpr(LiteParser::StatExprContext* ctx) override;

        void enterStatAssignExpr(LiteParser::StatAssignExprContext *ctx) override;
        //void exitStatAssignExpr(LiteParser::StatAssignExprContext *ctx) override;

        void enterStatNewLine(LiteParser::StatNewLineContext * ctx) override;
        //void exitStatNewLine(LiteParser::StatNewLineContext * ctx) override;

        //void enterExprINT(LiteParser::ExprINTContext * ctx) override;
        //void exitExprINT(LiteParser::ExprINTContext * ctx) override;

        //void enterExprParen(LiteParser::ExprParenContext * ctx) override;
        //void exitExprParen(LiteParser::ExprParenContext * ctx) override;

        //void enterExprNegate(LiteParser::ExprNegateContext * ctx) override;
        //void exitExprNegate(LiteParser::ExprNegateContext * ctx) override;

        void enterExprAddSub(LiteParser::ExprAddSubContext * ctx) override;
        //void exitExprAddSub(LiteParser::ExprAddSubContext * ctx) override;

        void enterExprID(LiteParser::ExprIDContext * ctx) override;
        //void exitExprID(LiteParser::ExprIDContext * ctx) override;

        //void enterExprMulDiv(LiteParser::ExprMulDivContext * ctx) override;
        //void exitExprMulDiv(LiteParser::ExprMulDivContext * ctx) override;


        //void enterEveryRule(antlr4::ParserRuleContext * ctx) override;
        //void exitEveryRule(antlr4::ParserRuleContext * ctx) override;
        //void visitTerminal(antlr4::tree::TerminalNode* node) override;
        //void visitErrorNode(antlr4::tree::ErrorNode * node) override;
};

