#ifndef WHITEKNIGHT_H_
#define WHITEKNIGHT_H_

#include "piece.h"

class WhiteKnight: public Piece
{
public:

    WhiteKnight()
    {
        setType('N');
    }
};

#endif