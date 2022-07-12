#include <sstream>
#include <string>

// S on end because a class called CalculatorHelper exists somewhere in the antlr files
class CalculatorHelperS {
   public:
    static std::string calculate(std::stringstream &ss);
};