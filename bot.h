#pragma once

#include "player.h"

class Bot : public Player
{
public:
	Bot(char m);
	//void play();
	int addMove(char[], Bot, Game);
};
