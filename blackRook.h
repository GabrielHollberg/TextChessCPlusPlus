#ifndef BLACKROOK_H_
#define BLACKROOK_H_

#include "piece.h"

class BlackRook: public Piece
{
public:

    BlackRook()
    {
        setType('r');
    }
};

#endif