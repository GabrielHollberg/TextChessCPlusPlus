#ifndef WHITEQUEEN_H_
#define WHITEQUEEN_H_

#include "piece.h"

class WhiteQueen: public Piece
{
public:

    WhiteQueen()
    {
        setType('Q');
    }
};

#endif