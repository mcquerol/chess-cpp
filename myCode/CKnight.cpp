#include "CKnight.h"


CKnight::CKnight(int color): CPiece(color)
{
	this->color = color;
	this->score = KNIGHT;
}

void CKnight::checkLegalMoves()
{
	//TODO do legal knight moves
}
