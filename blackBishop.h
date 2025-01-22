#ifndef BLACKBISHOP_H_
#define BLACKBISHOP_H_

#include "piece.h"

class BlackBishop: public Piece
{
public:

    BlackBishop()
    {
        setType('b');
    }
};

#endif