#include "Game.h"
#include <ctime>
#include <iostream>

Game::Game()
{
	srand(time(0));
	wordToGuess = words[rand() % words->size()];
	soFar = std::string(wordToGuess.size(), '-');

}

void Game::GetHiddenWord()
{
	std::cout << wordToGuess;
}

bool Game::isCorrect()
{
	return false;
}

void Game::Play()
{
	while ((player.GetGuesses() < MAX_TRIES) && (soFar != wordToGuess)) {
		std::cout << soFar << std::endl;
		player.letterGuessing();
		if (wordToGuess.find(player.GetLastLetter()) != std::string::npos) {
			Reveal(player.GetLastLetter());
		}
		else {
			player.WrongGuess();
		}
	}
	std::cout << soFar << std::endl;
}

void Game::Reveal(char letter)
{
	for (int i = 0; i < wordToGuess.size(); i++)
	{
		if (wordToGuess[i] == player.GetLastLetter())
			soFar[i] = player.GetLastLetter();
	}
}

void Game::displayWord()
{
	std::cout << soFar;
}
