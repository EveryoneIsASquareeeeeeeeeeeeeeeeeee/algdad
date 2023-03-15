#ifndef _HUMAN_H
#define _HUMAN_H

#include <iostream>
#include <string>
#include "Player.h"

class Human : public Player
{
    public:
    Human();
    char makeMove();
    std::string getName();
};

#endif