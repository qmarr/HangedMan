#pragma once
#include <string>
#include "Player.h"

class Game
{
public:
	Game();
    void GetHiddenWord();
    bool isCorrect();
    void Play();
    void Reveal(char letter);
    void displayWord();
private:
    
	std::string wordToGuess;
    /*std::string words[17] = {
           "Guitar","Hamburger","House",
           "Kitchen","Lighter","Umbrella",
           "Furniture","Toothbrush","Ghost",
           "Notebook","Magazine","Shampoo",
           "Refrigerator","Furniture","Kangaroo",
           "Insect","Sandwich"
    };*/
    std::string words[2] = { "Lighter", "Fighter"};
    std::string soFar;
    const unsigned int MAX_TRIES = 6;
    Player player;
};

