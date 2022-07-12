#pragma once
#include "CalculatorBaseListener.h"

class CalculatorListenerImp : public CalculatorBaseListener {
   private:
    std::stack<double> double_stack;

   public:
    double get_result();

    void exitDiv(CalculatorParser::DivContext *ctx) override;

    void exitAdd(CalculatorParser::AddContext *ctx) override;

    void exitSub(CalculatorParser::SubContext *ctx) override;

    void exitMult(CalculatorParser::MultContext *ctx) override;

    void exitExp(CalculatorParser::ExpContext *ctx) override;

    void exitAtom(CalculatorParser::AtomContext *ctx) override;
};