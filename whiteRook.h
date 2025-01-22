#ifndef WHITEROOK_H_
#define WHITEROOK_H_

#include "piece.h"

class WhiteRook: public Piece
{
public:

    WhiteRook()
    {
        setType('R');
    }
};

#endif