#ifndef BLACKKNIGHT_H_
#define BLACKKNIGHT_H_

#include "piece.h"

class BlackKnight: public Piece
{
public:

    BlackKnight()
    {
        setType('n');
    }
};

#endif