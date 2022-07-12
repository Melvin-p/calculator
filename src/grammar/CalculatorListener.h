
// Generated from ./Calculator.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CalculatorParser.
 */
class  CalculatorListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterDiv(CalculatorParser::DivContext *ctx) = 0;
  virtual void exitDiv(CalculatorParser::DivContext *ctx) = 0;

  virtual void enterAdd(CalculatorParser::AddContext *ctx) = 0;
  virtual void exitAdd(CalculatorParser::AddContext *ctx) = 0;

  virtual void enterSub(CalculatorParser::SubContext *ctx) = 0;
  virtual void exitSub(CalculatorParser::SubContext *ctx) = 0;

  virtual void enterMult(CalculatorParser::MultContext *ctx) = 0;
  virtual void exitMult(CalculatorParser::MultContext *ctx) = 0;

  virtual void enterBrackects(CalculatorParser::BrackectsContext *ctx) = 0;
  virtual void exitBrackects(CalculatorParser::BrackectsContext *ctx) = 0;

  virtual void enterExp(CalculatorParser::ExpContext *ctx) = 0;
  virtual void exitExp(CalculatorParser::ExpContext *ctx) = 0;

  virtual void enterAtom(CalculatorParser::AtomContext *ctx) = 0;
  virtual void exitAtom(CalculatorParser::AtomContext *ctx) = 0;


};

