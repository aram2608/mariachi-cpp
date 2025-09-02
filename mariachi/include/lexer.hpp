#include <iostream>

using std::string;
using std::cout;
using std::endl;

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