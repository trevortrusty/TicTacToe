//c++
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <limits>
#include "game.h"
#include "player.h"


int main()
{
	Game game;
	const int arraySize = 9;
	char moves[arraySize] = {};
	int spot = 0; // 1 - 9 postion of 'x' or 'y' on 'tic-tac-toe board/matrix'
	Player player1('x'), player2('o');

	game.initialize(moves);

	//player2.setMark('o');

	while (true)
	{
		// player 1
		std::cout << "Player 1: ";
		std::cin >> spot;

		/*Catch input that will break the program (e.g. alpha characters) or numbers outside the range 1-9*/
		while (std::cin.fail() || (spot < 1 || spot > 9)) 
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid position, please try again\n";
			std::cout << "Player 1: ";
			std::cin >> spot;
		}

		player1.addMove(moves, spot, game);
		std::cout << "You've placed a(n) " << moves[spot] << " at position " << spot << std::endl;

		// player 2
		std::cout << "Player 2: ";
		std::cin >> spot;

		/*Catch input that will break the program (e.g. alpha characters) or numbers outside the range 1-9*/
		while (std::cin.fail() || (spot < 1 || spot > 9))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid position, please try again\n";
			std::cout << "Player 2: ";
			std::cin >> spot;
		}

		player2.addMove(moves, spot, game);
		std::cout << "You've placed a(n) " << moves[spot] << " at position " << spot << std::endl;
	}
}
