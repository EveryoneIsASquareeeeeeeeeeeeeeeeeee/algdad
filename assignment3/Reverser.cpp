#include "Reverser.h"

int Reverser::reverseDigit(int value)
{
    int revValue, remainder;
    while (value != 0){
        remainder = value % 10;
        revValue = revValue * 10 + remainder;
        value /= 10;
    };
    return revValue;
};

std::string Reverser::reverseString(std::string characters)
{
    std::string revChar;

    for(int i = characters.length()-1; i >= 0; i--){
        revChar.push_back(characters[i]);
    };
    return revChar;
};