#include "Human.h"

Human::Human()
{
    name = "Human";
};

char Human::makeMove()
{
    std::cout<< "Enter move: ";
    std::cin>>move;
    return move;
};

std::string Human::getName()
{
    //std::cin >> name;
    return name;
};