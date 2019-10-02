#include "player.h"

Player::Player()
{
	setMark('0');
}

Player::Player(char m)
{
	setMark(m);
}

void Player::addMove(char game[], int position, Game var)
{
	//cout << "addMove function called" << endl;
	game[position] = mark;
	var.showBoard(game);
}

void Player::setMark(char m)
{
	mark = m;
}

char Player::getMark() const
{
	return mark;
}

bool Player::playerWin(char m[])
{

	if (((m[1] == m[2]) && (m[2] == m[3]) && (m[3] == mark)) || (((m[4] == m[5]) && (m[5] == m[6]) && (m[6] == mark)))
		|| (((m[7] == m[8]) && (m[8] == m[9]) && (m[9] == mark)) || (((m[1] == m[5]) && (m[5] == m[9]) && (m[9] == mark)))) // 7, 8 and 9....1, 5, and 9
		|| (((m[1] == m[2]) && (m[2] == m[3]) && (m[3] == mark)) || (((m[4] == m[5]) && (m[5] == m[6]) && (m[6] == mark)))) // 2, 5, and 8..... 3, 5, and 7
		|| (((m[1] == m[4]) && (m[4] == m[7]) && (m[7] == mark)) || (((m[3] == m[6]) && (m[6] == m[9]) && (m[9] == mark))))) // 1, 4, and 7.... 3, 6, and 9
	{
		return true;
	}
	else
		return false;
}