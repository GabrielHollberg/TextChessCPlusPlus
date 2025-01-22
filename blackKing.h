#ifndef BLACKKING_H_
#define BLACKKING_H_

#include "piece.h"

class BlackKing: public Piece
{
public:

    BlackKing()
    {
        setType('k');
    }
};

#endif