#ifndef _COMPUTER_H
#define _COMPUTER_H

#include <iostream>
#include <string>
#include "Player.h"

class Computer : public Player
{
    public:
    Computer();
    char makeMove();
    std::string getName();
};

#endif