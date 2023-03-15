#ifndef _Move_H
#define _Move_H

#include <iostream>
#include <string>

class Move {
    protected:
    std::string name;
    public:
    Move();
    virtual std::string getName();
};

#endif