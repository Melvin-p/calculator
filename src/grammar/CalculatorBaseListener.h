
// Generated from ./Calculator.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorListener.h"


/**
 * This class provides an empty implementation of CalculatorListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CalculatorBaseListener : public CalculatorListener {
public:

  virtual void enterDiv(CalculatorParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(CalculatorParser::DivContext * /*ctx*/) override { }

  virtual void enterAdd(CalculatorParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(CalculatorParser::AddContext * /*ctx*/) override { }

  virtual void enterSub(CalculatorParser::SubContext * /*ctx*/) override { }
  virtual void exitSub(CalculatorParser::SubContext * /*ctx*/) override { }

  virtual void enterMult(CalculatorParser::MultContext * /*ctx*/) override { }
  virtual void exitMult(CalculatorParser::MultContext * /*ctx*/) override { }

  virtual void enterBrackects(CalculatorParser::BrackectsContext * /*ctx*/) override { }
  virtual void exitBrackects(CalculatorParser::BrackectsContext * /*ctx*/) override { }

  virtual void enterExp(CalculatorParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(CalculatorParser::ExpContext * /*ctx*/) override { }

  virtual void enterAtom(CalculatorParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(CalculatorParser::AtomContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

