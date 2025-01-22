#ifndef BLACKPAWN_H_
#define BLACKPAWN_H_

#include "piece.h"

class BlackPawn: public Piece
{
public:

    BlackPawn()
    {
        setType('p');
    }
};

#endif