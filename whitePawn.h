#ifndef WHITEPAWN_H_
#define WHITEPAWN_H_

#include "piece.h"

class WhitePawn: public Piece
{
public:

    WhitePawn()
    {
        setType('P');
    }
};

#endif