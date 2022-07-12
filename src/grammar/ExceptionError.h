

#include "BaseErrorListener.h"
#include "antlr4-runtime.h"
#include <string>

class ExceptionError : public antlr4::BaseErrorListener {
private:
  std::string error_msg;

public:
  virtual void syntaxError(antlr4::Recognizer *recognizer,
                           antlr4::Token *offendingSymbol, size_t line,
                           size_t charPositionInLine, const std::string &msg,
                           std::exception_ptr e) override;
};