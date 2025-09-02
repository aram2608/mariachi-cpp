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
    void tokenize();

    // Function to add tokens
    void add_tok(const Type tt, const std::string& value);

    // Test to check for numbers
    bool is_num(const char c) const;

    // Function to handle numbers
    void number();

    // Test to see if we are at the end of the string
    bool is_end();

    string code;
    size_t current;

  private:
    // Advances to next token and get character
    char advance();
};