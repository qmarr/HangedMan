#include "Game.h"
#include <ctime>
#include <iostream>

Game::Game()
{
	srand(time(0));
	wordToGuess = words[rand() % words->size()];
}

void Game::GetWord()
{
	std::cout << wordToGuess;
}
