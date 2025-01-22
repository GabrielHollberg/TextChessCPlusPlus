#include <iostream>

#include "board.h"

int main(int argc, char* argv[])
{
    Board board;
    std::string command;
    std::string command2;
    std::string turn = "white";
    std::vector<Square> moves;
    bool quit = false;
    bool move = false;

    system("clear");
    std::cout << "\n options (o) - move (e2e4) - reset (r) - quit (q)\n\n";
    do
    {
        std::cout << board.toString(turn);
        if(move == true)
        {
            std::cout << "\n Where would you like to move? ";
        } else if(turn == "white")
        {
            std::cout << "\n White to move: ";
        } else
        {
            std::cout << "\n Black to move: ";
        }
        if(move == true)
        {
            std::cin >> command2;
            system("clear");
            std::cout << std::endl;

            for(int i = 0; i < moves.size(); i++)
            {
                if(moves.at(i).toString() == command2)
                {
                    break;
                } else {
                    move = false;
                }
            }
            if(move == true)
            {
                board.move(command, command2);
                move = false;
            }
            moves.clear();
        } else
        {
            std::cin >> command;
            system("clear");
            std::cout << std::endl;

            if(command == "options" || command == "o")
            {
                std::cout << " options (o) - move (e2e4) - reset (r) - quit (q)\n\n";
            } else if (command.size() == 2 && isalpha(command.at(0)) && isdigit(command.at(1)))
            {
                if(isupper(board.getSquare(command).getPiece().getType()))
                {
                    moves = board.checkWhiteMoves(command);
                } else
                {
                    moves = board.checkBlackMoves(command);
                }

                system("clear");

                std::cout << "\n";

                for(int i = 0; i < moves.size(); i++)
                {
                    std::cout << " " << moves.at(i).toString();
                }
                std::cout << std::endl << std::endl;
            } else if(command == "reset" || command == "r")
            {
                board.resetBoard();
                turn = "white";
                std::cout << std::endl << std::endl;
            } else if(command == "quit" || command == "q")
            {
                quit = true;
                break;
            } else
            {
                std::cout << " Invalid Command\n\n";
            }
        }
    } while(quit == false);

    return 0;
}