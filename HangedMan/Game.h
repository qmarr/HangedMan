#pragma once
#include <string>
class Game
{
public:
	Game();
    void GetWord();
private:
	std::string wordToGuess;
    std::string words[17] = {
           "Guitar","Hamburger","House",
           "Kitchen","Lighter","Umbrella",
           "Furniture","Toothbrush","Ghost",
           "Notebook","Magazine","Shampoo",
           "Refrigerator","Furniture","Kangaroo",
           "Insect","Sandwich"
    };
};

