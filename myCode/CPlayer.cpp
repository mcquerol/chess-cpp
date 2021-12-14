#include "CPlayer.h"
#include <iostream>

using namespace std;
CPlayer::CPlayer(int color)
{
	this->color = color;
}
void CPlayer::makeMove(unsigned int x, unsigned int y, unsigned int nx, unsigned int ny, CPiece** board)
{
	CPiece p; //local piece object
	/*
	 * check the color of the piece is the color
	 * of the player
	 */
	if(board[8-x][y-1].getColor() == this->color)
	{
		board[8-nx][ny-1] = board[8-x][y-1]; //move the piece to the new position
		board[8-x][y-1] = p.EMPTY; //make previous (original) position empty
	}
}
