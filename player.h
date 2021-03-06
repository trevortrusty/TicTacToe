#ifndef PLAYER_H
#define PLAYER_H
#include "game.h"


class Player
{
public:
	void addMove(char[], int, Game); // adds a player's mark to the desired spot
	void setMark(char);
	char getMark() const;
	Player(); // Default constructor
	Player(char);
	bool playerWin(char[]);
private:
	char mark; // Letter that represents the players' move i.e. x or y
};

#endif // !PLAYER_H

