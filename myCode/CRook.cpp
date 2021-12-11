#include "CRook.h"

CRook::CRook(int color): CPiece(color)
{
	this->color = color;
	this->score = ROOK;
}
void CRook::checkLegalMoves()
{
	//TODO check legal ROOK moves
}
