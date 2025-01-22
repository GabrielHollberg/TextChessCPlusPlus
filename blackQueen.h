#ifndef BLACKQUEEN_H_
#define BLACKQUEEN_H_

#include "piece.h"

class BlackQueen: public Piece
{
public:

    BlackQueen()
    {
        setType('q');
    }
};

#endif