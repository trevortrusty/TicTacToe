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
	//if ((m[1]==m[2]==m[3]==p1.getMark()) || (m[4] == m[5] == m[6] == p1.getMark()) 
	//	|| (m[7] == m[8] == m[9]) == p1.getMark() || (m[1] == m[5] == m[9]) == p1.getMark() 
	//	|| (m[2] == m[5] == m[8]) == p1.getMark() || (m[3] == m[5] == m[7]) == p1.getMark()
	//	|| (m[1] == m[4] == m[7]) == p1.getMark() || (m[3] == m[6] == m[9]) == p1.getMark())
	//{
	//	return false;
	//}
	for (int i = 1; i <= 9; i++)
	{
		if (m[i] == '-')
		{
			return true;
		}
	}
	return false;

}

//bool Game::playerWin(char m[], Player p1, Player p2)
//{
//	if ((m[1] == m[2] == m[3] == p1.getMark()) || (m[4] == m[5] == m[6] == p1.getMark())
//		|| (m[7] == m[8] == m[9]) == p1.getMark() || (m[1] == m[5] == m[9]) == p1.getMark()
//		|| (m[2] == m[5] == m[8]) == p1.getMark() || (m[3] == m[5] == m[7]) == p1.getMark()
//		|| (m[1] == m[4] == m[7]) == p1.getMark() || (m[3] == m[6] == m[9]) == p1.getMark())
//	{
//		return true;
//	}
//}