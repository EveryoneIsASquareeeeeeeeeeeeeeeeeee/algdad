#include <iostream>
#include "Player.cpp"
#include "Computer.cpp"
#include "Human.cpp"
#include "Referee.cpp"

int main()
{
    Player* player1 = new Human();
    Player* player2 = new Computer();
    Referee referee;

    std::cout << referee.refGame(player1, player2) << std::endl;
    return 0;
};