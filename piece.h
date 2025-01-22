#ifndef PIECE_H_
#define PIECE_H_

#include <string>

class Piece
{
public:

    std::string toString()
    {
        std::string result = "";
        result += type;
        return result;
    }

    char getType(){
        return type;
    }

    void setType(char type)
    {
        this->type = type;
    }

private:
    char type = ' ';
};

#endif