#pragma once
class Player
{
public:
    Player();
    char letterGuessing();
    char GetLastLetter();
    unsigned int GetGuesses();
    void WrongGuess();
private:
    unsigned int wrongGuesses = 0;
    char lastLetter;
};

