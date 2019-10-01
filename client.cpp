//c++
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include "game.h"
#include "player.h"
using namespace std;

//class Game
//{
//public:
//	void showBoard(char[]);
//	void initialize(char[]);
//	bool inGame()
//	{
//		bool status = true;
//		return status;
//	}
//};

//class Player
//{
//public:
//	char type; // Letter that represents the players' move i.e. x or y
//	void addMove(char[], int, Game); // adds a player's mark to the desired spot
//};

// Programmer defined functions
//void addMove(string[]);




int main()
{
	Game game;
	const int arraySize = 9;
	char moves[arraySize] = {};
	int spot = 0; // 1 - 9 postion of 'x' or 'y' on 'tic-tac-toe board/matrix'
	Player player1, player2;

	game.initialize(moves);

	player1.type = 'x';
	player2.type = 'o';

	while (true)
	{
		// player 1
		cout << "Player 1: ";
		cin >> spot;
		player1.addMove(moves, spot, game);
		cout << "You've placed a(n) " << moves[spot] << " at position " << spot << endl;

		// player 2
		cout << "Player 2: ";
		cin >> spot;
		player2.addMove(moves, spot, game);
		cout << "You've placed a(n) " << moves[spot] << " at position " << spot << endl;
	}
}

// Definitions

void Game::initialize(char array[])
{
	for (int i = 1; i <= 9; i++)
	{
		array[i] = '-';
	}
}
void Player::addMove(char game[], int position, Game var)
{
	//cout << "addMove function called" << endl;
	game[position] = type;
	var.showBoard(game);
}

void Game::showBoard(char game[])
{
	for (int i = 1; i <= 3; i++)
	{
		cout << game[i];
	}
	cout << endl;
	for (int i = 4; i <= 6; i++)
	{
		cout << game[i];
	}
	cout << endl;
	for (int i = 7; i <= 9; i++)
	{
		cout << game[i];
	}
	cout << endl;
}