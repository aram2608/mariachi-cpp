
enum class Type { INT, PLUS, MINUS, EOF_ };

class Token {
  public:
    Token(Type type, int value, int pos_start);
    ~Token();

    Type type;
    int  value;
    int  pos_start;
};