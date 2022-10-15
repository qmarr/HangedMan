#include "Player.h"
#include <iostream>

char Player::letterGuessing()
{
    char letter;
    std::cout << "Please choose a letter" << std::endl;
    std::cin >> letter;
    return letter;
}