
#include "CPiece.h"
#include <iostream>
CPiece::CPiece()
{
	this->color = EMPTY;
	this->score = 0;
}
CPiece::CPiece(int color)
{
	this->color = color;
	this->score = 0; //no score for abstract piece
}
CPiece::~CPiece()
{

}
void CPiece::checkLegalMoves()
{

}
void CPiece::checkNeighbors(unsigned int x, unsigned int y)
{
	// find the x field before and after the search position and respect the
		// field bounds
//		for(int nX = x - 1; nX <= x + 1; nX++)
//		{
//			// find the y field before and after the search position and respect
//			// the field bounds
//			for(int nY = y - 1; nY <= y + 1; nY++)
//			{
//				if(this->board[nX][nY] == this->EMPTY)
//				{
//					std::cout << "EMPTY";
//				}
//			}
//		}
}
int CPiece::getColor()
{
	return this->color;
}
int CPiece::getScore()
{
	return this->score;
}
