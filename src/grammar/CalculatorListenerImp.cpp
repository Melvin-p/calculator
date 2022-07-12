#pragma once
#include "CalculatorListenerImp.h"

#include "math.h"

void CalculatorListenerImp::exitDiv(CalculatorParser::DivContext *ctx) {
    double right = double_stack.top();
    double_stack.pop();
    double left = double_stack.top();
    double_stack.pop();
    double_stack.push(left / right);
}

void CalculatorListenerImp::exitAdd(CalculatorParser::AddContext *ctx) {
    double right = double_stack.top();
    double_stack.pop();
    double left = double_stack.top();
    double_stack.pop();
    double_stack.push(left + right);
}

void CalculatorListenerImp::exitSub(CalculatorParser::SubContext *ctx) {
    double right = double_stack.top();
    double_stack.pop();
    double left = double_stack.top();
    double_stack.pop();
    double_stack.push(left - right);
}

void CalculatorListenerImp::exitMult(CalculatorParser::MultContext *ctx) {
    double right = double_stack.top();
    double_stack.pop();
    double left = double_stack.top();
    double_stack.pop();
    double_stack.push(left * right);
}

void CalculatorListenerImp::exitExp(CalculatorParser::ExpContext *ctx) {
    double right = double_stack.top();
    double_stack.pop();
    double left = double_stack.top();
    double_stack.pop();
    double_stack.push(std::pow(left, right));
}

void CalculatorListenerImp::exitAtom(CalculatorParser::AtomContext *ctx) {
    double_stack.push(std::stod(ctx->getText()));
}

double CalculatorListenerImp::get_result() {
    return double_stack.top();
}
