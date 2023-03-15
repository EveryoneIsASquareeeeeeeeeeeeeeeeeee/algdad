#include "Referee.h"

Referee::Referee()
{
    
};

Player* Referee::refGame(Player* player1, Player* player2)
{
    char p1Move = player1->makeMove();
    char p2Move = player2->makeMove();

    std::string Sp1Name = player1->getName();
    std::string Sp2Name = player2->getName();

    const char* p1Name = Sp1Name.c_str();

    /*if (p1Move == 'R')
    {
        if (p2Move == 'R') return nullptr;
        else if (p2Move == 'P') return p2Name;
        else return p1Name;
    } else if (p1Move == 'P')
    {
        if (p2Move == 'R') return p1Name;
        else if (p2Move == 'P') return nullptr;
        else return p2Name;
    } else {
        if (p2Move == 'R') return p2Name;
        else if (p2Move == 'P') return p1Name;
        else return nullptr;
    }*/
};