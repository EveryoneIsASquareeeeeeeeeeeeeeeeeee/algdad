#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main()
{
    Player* player1 = new Human();
    Player* player2 = new Computer();
    Referee referee;

    std::cout << referee.refGame(player1, player2) << std::endl;
    return 0;
};