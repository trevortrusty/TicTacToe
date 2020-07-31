#ifndef GAME_H
#define GAME_H

class Game
{
public:
	void showBoard(char[]);
	void initialize(char[]);
	bool inGame(char[]);
	bool taken(char[], int);
	//bool playerWin(char[], Player, Player);
};

#endif // !GAME_H


