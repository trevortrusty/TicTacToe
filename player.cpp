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