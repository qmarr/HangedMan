#pragma once
class Player
{
public:
    Player();
    char letterGuessing();
private:
    unsigned int guess = 0;
    const unsigned int MAX_TRY = 6;
};

