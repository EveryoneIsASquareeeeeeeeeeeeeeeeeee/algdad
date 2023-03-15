#include <iostream>
#include "Truckloads.cpp"
#include "Reverser.cpp"

int main(){
    Truckloads tr;
    std::cout << tr.numTrucks(1024,5) << std::endl;
    Reverser r;
    std::cout << r.reverseDigit(0) << std::endl;
    std::cout << r.reverseString("Hello") << std::endl;
};
