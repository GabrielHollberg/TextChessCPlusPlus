#ifndef WHITEBISHOP_H_
#define WHITEBISHOP_H_

#include "piece.h"

class WhiteBishop: public Piece
{
public:

    WhiteBishop()
    {
        setType('B');
    }
};

#endif