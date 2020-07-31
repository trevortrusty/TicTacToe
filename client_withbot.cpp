//c++
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <limits>
#include "game.h"
#include "player.h"
#include "bot.h"


int main()
{
	Game game;
	const int arraySize = 10;
	char moves[arraySize] = {};
	int spot = 0; // 1 - 9 postion of 'x' or 'y' on 'tic-tac-toe board/matrix'
	Player player1('x');
	Bot player2('o');

	game.initialize(moves);
	game.showBoard(moves);
	//while (game.inGame(moves, player1, player2))
	while (game.inGame(moves) && !player1.playerWin(moves) && !player2.playerWin(moves))
	{
		// player 1
		std::cout << "Player 1: ";
		std::cin >> spot;

		/*Catch input that will break the program (e.g. alpha characters) or numbers outside the range 1-9*/
		while (std::cin.fail() || (spot < 1 || spot > 9) || game.taken(moves, spot)) 
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid position, please try again\n";
			std::cout << "Player 1: ";
			std::cin >> spot;
		}

		player1.addMove(moves, spot, game);
		std::cout << "You've placed a(n) " << moves[spot] << " at position " << spot << std::endl;

		// Check if player1 has won the game
		if (player1.playerWin(moves))
		{
			std::cout << "Player 1 wins!" << std::endl;
		}

		// player 2
		if(game.inGame(moves) && !player1.playerWin(moves))
		{
			std::cout << "Player 2: ";
			//std::cin >> spot;

			/*Catch input that will break the program (e.g. alpha characters) or numbers outside the range 1-9*/
			//while (std::cin.fail() || (spot < 1 || spot > 9) || game.taken(moves, spot))
			//{
			//	std::cin.clear();
			//	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//	std::cout << "Invalid position, please try again\n";
			//	std::cout << "Player 2: ";
			//	//std::cin >> spot;
			//}
			std::cout << std::endl;
			spot = player2.addMove(moves, player2, game);
			std::cout << "You've placed a(n) " << moves[spot] << " at position " << spot << std::endl;
			game.showBoard(moves);


			// Check if player2 has won the game
			if (player2.playerWin(moves))
			{
				std::cout << "Player 2 wins!" << std::endl;
			}
		}
	}
	if (!player1.playerWin(moves) && !player2.playerWin(moves))
	{
		std::cout << "Cats Game" << std::endl;
	}
	system("pause");
	return 0;
}
