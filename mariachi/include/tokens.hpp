
enum class Type { INT, PLUS, MINUS, EOF_ };

class Token {
  private:
    Token(Type type, int value, int pos_start);
    ~Token();

    Type type;
    int  value;
    int  pos_start;
};