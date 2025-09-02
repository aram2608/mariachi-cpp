#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Lexer {
  public:
    // Constructor
    Lexer(string code);
    ~Lexer();

    // Tokenize input
    void tokenize();

    string code;

  private:
    // Advances to next token
    void advance();
};