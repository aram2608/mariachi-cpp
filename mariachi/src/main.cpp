#include <iostream>
#include <lexer.hpp>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main() {
    string code;

    // REPL loop
    while (true) {

        // Prompt
        cout << "Welcome to the Mariachi REPL.\n";
        cout << "Enter salir() to exit.\n";
        cout << "-----------------------------\n";

        // We need to take in any input with spaces
        getline(cin, code);

        // If code matches these patterns break out of program
        if (code == "salir()") {
            break;
        } else {
            Lexer lex = Lexer(code);
            lex.tokenize();
        }
    }
    return 0;
}