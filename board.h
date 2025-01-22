#ifndef BOARD_H_
#define BOARD_H_

#include <vector>

#include "square.h"

class Board
{
public:

    Board()
    {
        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                squares[i][j].setRow(i);
                squares[i][j].setColumn(j);
            }
        }
        resetBoard();
    }

    std::string toString(std::string turn)
    {
        std::string result;

        if(turn == "white")
        {
            result += "\n ∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞\n $+———————————————————————————————+$\n $| " + squares[0][0].getPiece().toString();
            for(int i = 1; i < 8; i++)
            {
                result += " | " + squares[0][i].getPiece().toString();
            }

            for(int i = 1; i < 8; i++)
            {
                result += " |$ " + std::to_string(9 - i) + "\n $|———|———|———|———|———|———|———|———|$\n $| " + squares[i][0].getPiece().toString();
                for(int j = 1; j < 8; j++)
                {
                    result += " | " + squares[i][j].getPiece().toString();
                }
            }

            result += " |$ 1\n $+———————————————————————————————+$\n ∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞\n    a   b   c   d   e   f   g   h\n\n";
        } else
        {
            result += "\n ∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞\n $+———————————————————————————————+$\n $| " + squares[7][7].getPiece().toString();
            for(int i = 6; i >= 0; i--)
            {
                result += " | " + squares[7][i].getPiece().toString();
            }

            for(int i = 6; i >= 0; i--)
            {
                result += " |$ " + std::to_string(7 - i) + "\n $|———|———|———|———|———|———|———|———|$\n $| " + squares[i][7].getPiece().toString();
                for(int j = 6; j >= 0; j--)
                {
                    result += " | " + squares[i][j].getPiece().toString();
                }
            }

            result += " |$ 8\n $+———————————————————————————————+$\n ∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞∞\n    h   g   f   e   d   c   b   a\n\n";
        }

        return result;
    }

    void commandToPosition(std::string command)
    {
        switch(command.at(0))
        {
            case 'a':
                startColumn = 0;
                break;
            case 'b':
                startColumn = 1;
                break;
            case 'c':
                startColumn = 2;
                break;
            case 'd':
                startColumn = 3;
                break;
            case 'e':
                startColumn = 4;
                break;
            case 'f':
                startColumn = 5;
                break;
            case 'g':
                startColumn = 6;
                break;
            case 'h':
                startColumn = 7;
                break;
            default:
                startColumn = 8;
                break;
        }
        switch(command.at(1))
        {
            case '1':
                startRow = 7;
                break;
            case '2':
                startRow = 6;
                break;
            case '3':
                startRow = 5;
                break;
            case '4':
                startRow = 4;
                break;
            case '5':
                startRow = 3;
                break;
            case '6':
                startRow = 2;
                break;
            case '7':
                startRow = 1;
                break;
            case '8':
                startRow = 0;
                break;
            default:
                startRow = 8;
                break;
        }
    }

    Square getSquare(std::string command)
    {
        commandToPosition(command);

        return squares[startRow][startColumn];
    }

    std::vector<Square> checkWhiteMoves(std::string move)
    {
        std::vector<Square> moves;

        commandToPosition(move);

        if(startRow == 8 || startColumn == 8)
        {
            std::cout << "Invalid Square";
            return moves;
        } else
        {
            if(squares[startRow][startColumn].getPiece().getType() == 'B')
            {
                rowIterator = 1;
                columnIterator = 1;

                for(int i = 0; i < 4; i++)
                {
                endRow = startRow + rowIterator;
                endColumn = startColumn + columnIterator;
                
                while(endRow < 8 && endColumn < 8 && endRow >= 0 && endColumn >= 0)
                {
                    if(squares[endRow][endColumn].getPiece().getType() == ' ')
                    {
                        moves.push_back(squares[endRow][endColumn]);
                    } else if(islower(squares[endRow][endColumn].getPiece().getType()))
                    {
                        moves.push_back(squares[endRow][endColumn]);
                        break;
                    } else
                    {
                        break;
                    }

                    endRow += rowIterator;
                    endColumn += columnIterator;
                }

                endRow = startRow;
                endColumn = startColumn;

                switch(i)
                {
                    case 0:
                        rowIterator = -1;
                        break;
                    case 1:
                        columnIterator = -1;
                        break;
                    case 2:
                        rowIterator = 1;
                        break;
                }
                }
            }

            return moves;
        }
    }

    std::vector<Square> checkBlackMoves(std::string move)
    {
        std::vector<Square> moves;

        commandToPosition(move);

        if(startRow == 8 || startColumn == 8)
        {
            std::cout << "Invalid Square";
            return moves;
        } else
        {
            if(squares[startRow][startColumn].getPiece().getType() == 'b')
            {
                rowIterator = 1;
                columnIterator = 1;

                for(int i = 0; i < 4; i++)
                {
                endRow = startRow + rowIterator;
                endColumn = startColumn + columnIterator;
                
                while(endRow < 8 && endColumn < 8 && endRow >= 0 && endColumn >= 0)
                {
                    if(squares[endRow][endColumn].getPiece().getType() == ' ')
                    {
                        moves.push_back(squares[endRow][endColumn]);
                    } else if(isupper(squares[endRow][endColumn].getPiece().getType()))
                    {
                        moves.push_back(squares[endRow][endColumn]);
                        break;
                    } else
                    {
                        break;
                    }

                    endRow += rowIterator;
                    endColumn += columnIterator;
                }

                endRow = startRow;
                endColumn = startColumn;

                switch(i)
                {
                    case 0:
                        rowIterator = -1;
                        break;
                    case 1:
                        columnIterator = -1;
                        break;
                    case 2:
                        rowIterator = 1;
                        break;
                }
                }
            }

            return moves;
        }
    }

    void move(std::string startPosition, std::string endPosition)
    {
        commandToPosition(endPosition);
        endRow = startRow;
        endColumn = startColumn;
        commandToPosition(startPosition);
        squares[endRow][endColumn] = squares[startRow][startColumn];
        squares[startRow][startColumn].removePiece();
    }

    void resetBoard()
    {
        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                if(i == 0)
                {
                    switch(j)
                    {
                        case 0:
                            squares[i][j].addBlackRook();
                            break;
                        case 1:
                            squares[i][j].addBlackKnight();
                            break;
                        case 2:
                            squares[i][j].addBlackBishop();
                            break;
                        case 3:
                            squares[i][j].addBlackQueen();
                            break;
                        case 4:
                            squares[i][j].addBlackKing();
                            break;
                        case 5:
                            squares[i][j].addBlackBishop();
                            break;
                        case 6:
                            squares[i][j].addBlackKnight();
                            break;
                        case 7:
                            squares[i][j].addBlackRook();
                            break;
                    }
                } /*else if(i == 1)
                {
                    squares[i][j].addBlackPawn();
                } else if(i == 6)
                {
                    squares[i][j].addWhitePawn();
                } */else if(i == 7)
                {
                    switch(j)
                    {
                        case 0:
                            squares[i][j].addWhiteRook();
                            break;
                        case 1:
                            squares[i][j].addWhiteKnight();
                            break;
                        case 2:
                            squares[i][j].addWhiteBishop();
                            break;
                        case 3:
                            squares[i][j].addWhiteQueen();
                            break;
                        case 4:
                            squares[i][j].addWhiteKing();
                            break;
                        case 5:
                            squares[i][j].addWhiteBishop();
                            break;
                        case 6:
                            squares[i][j].addWhiteKnight();
                            break;
                        case 7:
                            squares[i][j].addWhiteRook();
                            break;
                    }
                } else
                {
                    squares[i][j].removePiece();
                }
            }
        }
    }

private:
    Square squares[8][8];
    int startRow;
    int startColumn;
    int rowIterator;
    int columnIterator;
    int endRow;
    int endColumn;
};

#endif