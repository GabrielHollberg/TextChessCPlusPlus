#ifndef WHITEKING_H_
#define WHITEKING_H_

#include "piece.h"

class WhiteKing: public Piece
{
public:

    WhiteKing()
    {
        setType('K');
    }
};

#endif