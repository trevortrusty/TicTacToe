#include "Bot.h"
#include <random>
#include <ctime>
#include <iostream>


Bot::Bot(char m)
{
	setMark(m);
}

//void Bot::play()
//{
//
//}

int Bot::addMove(char game[], Bot bot, Game var)
{
	int position, random;
	srand(time(NULL));
	// If the center spot is taken, bot will check to see if random corner spots are taken
	if (var.taken(game, 5))
	{
		random = rand() % 4 + 1;
		if (random == 1 && !var.taken(game, 1))
		{
			game[1] = bot.getMark();
			return 1;
		}
		else if (random == 2 && !var.taken(game, 3))
		{
			game[3] = bot.getMark();
			return 3;
		}
		else if (random == 3 && !var.taken(game, 7))
		{
			game[7] = bot.getMark();
			return 7;
		}
		else if (random == 4 && !var.taken(game, 9))
		{
			game[9] = bot.getMark();
			return 9;
		}
		else if (!var.taken(game, 2))
		{
			game[2] = bot.getMark();
			return 2;
		}
		else if (!var.taken(game, 4))
		{
			game[4] = bot.getMark();
			return 4;
		}
		else if (!var.taken(game, 6))
		{
			game[6] = bot.getMark();
			return 6;
		}
		else if (!var.taken(game, 8))
		{
			game[8] = bot.getMark();
			return 8;
		}
		else
			std::cout << "Bot Error: All spots taken" << std::endl;

	}

	// If any corner spots are taken, try to take the center spot, otherwise try another corner, and then edge spots after that.
	/*else if (var.taken(game, 1) || var.taken(game, 3) || var.taken(game, 7) || var.taken(game, 9))*/
	else
	{
		random = rand() % 4 + 1;
		if (!var.taken(game, 5))
		{
			game[5] = bot.getMark();
			return 5;
		}
		else if (random == 1 && !var.taken(game, 1))
		{
			game[1] = bot.getMark();
			return 1;
		}
		else if (random == 2 && !var.taken(game, 3))
		{
			game[3] = bot.getMark();
			return 3;
		}
		else if (random == 3 && !var.taken(game, 7))
		{
			game[7] = bot.getMark();
			return 7;
		}
		else if (random == 4 && !var.taken(game, 9))
		{
			game[9] = bot.getMark();
			return 9;
		}
		else if (!var.taken(game, 2))
		{
			game[2] = bot.getMark();
			return 2;
		}
		else if (!var.taken(game, 4))
		{
			game[4] = bot.getMark();
			return 4;
		}
		else if (!var.taken(game, 6))
		{
			game[6] = bot.getMark();
			return 6;
		}
		else if (!var.taken(game, 8))
		{
			game[8] = bot.getMark();
			return 8;
		}
		else
			std::cout << "Bot Error: All spots taken" << std::endl;
	}
}