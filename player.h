#ifndef PLAYER_H
#define PLAYER_H
#include "game.h"


class Player
{
public:
	char type; // Letter that represents the players' move i.e. x or y
	void addMove(char[], int, Game); // adds a player's mark to the desired spot
};

#endif // !PLAYER_H

