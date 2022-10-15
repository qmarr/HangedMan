#include "Player.h"
#include <iostream>

Player::Player()
{
}

char Player::letterGuessing()
{
    char letter;
    std::cout << "Please choose a letter" << std::endl;
    std::cin >> letter;
    lastLetter = letter;
    return letter;
}

char Player::GetLastLetter()
{
    return lastLetter;
}

unsigned int Player::GetGuesses()
{
    return wrongGuesses;
}

void Player::WrongGuess()
{
    ++wrongGuesses;
}
