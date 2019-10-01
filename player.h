#ifndef PLAYER_H
#define PLAYER_H
#include "game.h"


class Player
{
public:
	void addMove(char[], int, Game); // adds a player's mark to the desired spot
	Player(); // Default constructor
	void setMark(char);
private:
	char mark; // Letter that represents the players' move i.e. x or y
};

#endif // !PLAYER_H

