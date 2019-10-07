#include "game.h"
#include "player.h"
#include <iostream>
#include <string>

char intToChar(int num)
{
	switch (num)
	{
	case 1:
		return '1';
		break;	
	case 2:
		return '2';
		break;	
	case 3:
		return '3';
		break;
	case 4:
		return '4';
		break;
	case 5:
		return '5';
		break;
	case 6:
		return '6';
		break;
	case 7:
		return '7';
		break;
	case 8:
		return '8';
		break;
	case 9:
		return '9';
		break;
	}
	return 0;
}

void Game::initialize(char array[])
{
	for (int i = 1; i <= 9; i++)
	{
		//array[i] = '-';
		array[i] = intToChar(i);
	}
}

void Game::showBoard(char game[])
{
	for (int i = 1; i <= 3; i++)
	{
		std::cout << "| " << game[i] << " | ";
	}
	std::cout << std::endl;
	for (int i = 4; i <= 6; i++)
	{
		std::cout << "| " << game[i] << " | ";
	}
	std::cout << std::endl;
	for (int i = 7; i <= 9; i++)
	{
		std::cout << "| " << game[i] << " | ";

	}
	std::cout << std::endl;
}

bool Game::inGame(char m[])
{
	for (int i = 1; i <= 9; i++)
	{
		//if (m[i] == '-')
		//{
		//	return true;
		//}
		if (m[i] >= 1 || m[i] <= 9)
		{
			return true;
		}
	}
	return false;

}