#include "game.h"
#include "player.h"
#include "iostream"

void Game::initialize(char array[])
{
	for (int i = 1; i <= 9; i++)
	{
		array[i] = '-';
	}
}

void Game::showBoard(char game[])
{
	for (int i = 1; i <= 3; i++)
	{
		std::cout << game[i];
	}
	std::cout << std::endl;
	for (int i = 4; i <= 6; i++)
	{
		std::cout << game[i];
	}
	std::cout << std::endl;
	for (int i = 7; i <= 9; i++)
	{
		std::cout << game[i];
	}
	std::cout << std::endl;
}

bool Game::inGame(char m[])
{
	for (int i = 1; i <= 9; i++)
	{
		if (m[i] == '-')
		{
			return true;
		}
	}
	return false;

}