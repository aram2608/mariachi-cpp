#include <iostream>
#include <vector>
#include <string>
#include "tokens.hpp"

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Lexer {
  public:
    // Constructor
    Lexer(string code);
    ~Lexer();

    // Tokenize input
    vector<Token> tokenize();

    string code;
    size_t current;

  private:
    // Advances to next token and get character
    char advance();
};