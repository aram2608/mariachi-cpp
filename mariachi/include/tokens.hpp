
enum class Type { INT, PLUS, MINUS, EOF };

class Token {
  private:
    Token(int value, int pos_start);
    ~Token();

    Type type;
    int  value;
    int  pos_start;
};