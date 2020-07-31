#include "player.h"


// 1  2  3
// 4  5  6
// 7  8  9

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
	bool horizontal = (m[1] == m[2] && m[2] == m[3] && m[3] == mark) || (m[4] == m[5] && m[5] == m[6] && m[6] == mark) || (m[7] == m[8] && m[8] == m[9] && m[9] == mark);
	bool vertical = (m[1] == m[4] && m[4] == m[7] && m[7] == mark) || (m[2] == m[5] && m[5] == m[8] && m[8] == mark) || (m[3] == m[6] && m[6] == m[9] && m[9] == mark);
	bool diagonal = (m[1] == m[5] && m[5] == m[9] && m[9] == mark) || (m[3] == m[5] && m[5] == m[5] && m[7] == mark);

	if(horizontal || vertical || diagonal)
	{
		return true;
	}
	else
		return false;
}