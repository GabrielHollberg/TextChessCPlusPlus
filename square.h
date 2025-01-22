#ifndef SQUARE_H_
#define SQUARE_H_

#include "whitePawn.h"
#include "whiteRook.h"
#include "whiteKnight.h"
#include "whiteBishop.h"
#include "whiteQueen.h"
#include "whiteKing.h"
#include "blackPawn.h"
#include "blackRook.h"
#include "blackKnight.h"
#include "blackBishop.h"
#include "blackQueen.h"
#include "blackKing.h"

class Square
{
public:

    std::string toString()
    {
        switch(row)
        {
            case 0:
                switch(column)
                {
                    case 0:
                        return "a8";
                        break;
                    case 1:
                        return "b8";
                        break;
                    case 2:
                        return "c8";
                        break;
                    case 3:
                        return "d8";
                        break;
                    case 4:
                        return "e8";
                        break;
                    case 5:
                        return "f8";
                        break;
                    case 6:
                        return "g8";
                        break;
                    case 7:
                        return "h8";
                        break;
                    default:
                    return "Weird Error";
                    break;
                }
                break;
            case 1:
                switch(column)
                {
                    case 0:
                        return "a7";
                        break;
                    case 1:
                        return "b7";
                        break;
                    case 2:
                        return "c7";
                        break;
                    case 3:
                        return "d7";
                        break;
                    case 4:
                        return "e7";
                        break;
                    case 5:
                        return "f7";
                        break;
                    case 6:
                        return "g7";
                        break;
                    case 7:
                        return "h7";
                        break;
                    default:
                    return "Weird Error";
                    break;
                }
                break;
            case 2:
                switch(column)
                {
                    case 0:
                        return "a6";
                        break;
                    case 1:
                        return "b6";
                        break;
                    case 2:
                        return "c6";
                        break;
                    case 3:
                        return "d6";
                        break;
                    case 4:
                        return "e6";
                        break;
                    case 5:
                        return "f6";
                        break;
                    case 6:
                        return "g6";
                        break;
                    case 7:
                        return "h6";
                        break;
                    default:
                    return "Weird Error";
                    break;
                }
                break;
            case 3:
                switch(column)
                {
                    case 0:
                        return "a5";
                        break;
                    case 1:
                        return "b5";
                        break;
                    case 2:
                        return "c5";
                        break;
                    case 3:
                        return "d5";
                        break;
                    case 4:
                        return "e5";
                        break;
                    case 5:
                        return "f5";
                        break;
                    case 6:
                        return "g5";
                        break;
                    case 7:
                        return "h5";
                        break;
                    default:
                    return "Weird Error";
                    break;
                }
                break;
            case 4:
                switch(column)
                {
                    case 0:
                        return "a4";
                        break;
                    case 1:
                        return "b4";
                        break;
                    case 2:
                        return "c4";
                        break;
                    case 3:
                        return "d4";
                        break;
                    case 4:
                        return "e4";
                        break;
                    case 5:
                        return "f4";
                        break;
                    case 6:
                        return "g4";
                        break;
                    case 7:
                        return "h4";
                        break;
                    default:
                    return "Weird Error";
                    break;
                }
                break;
            case 5:
                switch(column)
                {
                    case 0:
                        return "a3";
                        break;
                    case 1:
                        return "b3";
                        break;
                    case 2:
                        return "c3";
                        break;
                    case 3:
                        return "d3";
                        break;
                    case 4:
                        return "e3";
                        break;
                    case 5:
                        return "f3";
                        break;
                    case 6:
                        return "g3";
                        break;
                    case 7:
                        return "h3";
                        break;
                    default:
                    return "Weird Error";
                    break;
                }
                break;
            case 6:
                switch(column)
                {
                    case 0:
                        return "a2";
                        break;
                    case 1:
                        return "b2";
                        break;
                    case 2:
                        return "c2";
                        break;
                    case 3:
                        return "d2";
                        break;
                    case 4:
                        return "e2";
                        break;
                    case 5:
                        return "f2";
                        break;
                    case 6:
                        return "g2";
                        break;
                    case 7:
                        return "h2";
                        break;
                    default:
                    return "Weird Error";
                    break;
                }
                break;
            case 7:
                switch(column)
                {
                    case 0:
                        return "a1";
                        break;
                    case 1:
                        return "b1";
                        break;
                    case 2:
                        return "c1";
                        break;
                    case 3:
                        return "d1";
                        break;
                    case 4:
                        return "e1";
                        break;
                    case 5:
                        return "f1";
                        break;
                    case 6:
                        return "g1";
                        break;
                    case 7:
                        return "h1";
                        break;
                    default:
                    return "Weird Error";
                    break;
                }
                break;
                default:
                    return "Weird Error";
                    break;
        }
    }

    Piece getPiece()
    {
        return piece;
    }

    void setRow(int row)
    {
        this->row = row;
    }

    void setColumn(int column)
    {
        this->column = column;
    }

    void addWhitePawn()
    {
        this->piece = WhitePawn();
    }

    void addWhiteRook()
    {
        this->piece = WhiteRook();
    }

    void addWhiteKnight()
    {
        this->piece = WhiteKnight();
    }

    void addWhiteBishop()
    {
        this->piece = WhiteBishop();
    }

    void addWhiteQueen()
    {
        this->piece = WhiteQueen();
    }

    void addWhiteKing()
    {
        this->piece = WhiteKing();
    }

    void addBlackPawn()
    {
        this->piece = BlackPawn();
    }

    void addBlackRook()
    {
        this->piece = BlackRook();
    }

    void addBlackKnight()
    {
        this->piece = BlackKnight();
    }

    void addBlackBishop()
    {
        this->piece = BlackBishop();
    }

    void addBlackQueen()
    {
        this->piece = BlackQueen();
    }

    void addBlackKing()
    {
        this->piece = BlackKing();
    }

    void removePiece()
    {
        this->piece = Piece();
    }

private:
    Piece piece;
    int row;
    int column;
};

#endif