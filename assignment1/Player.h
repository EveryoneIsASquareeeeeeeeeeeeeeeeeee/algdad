#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <string>

class Player
{
    protected:
    char move;
    std::string name;
    public:
    char makeMove();
    std::string getName();
};

#endif