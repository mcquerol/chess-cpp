#include "CKing.h"

CKing::CKing(int color): CPiece(color)
{
	this->color = color;
	this->score = KING; //king has no score
}
bool CKing::isCheckMate()
{
	//TODO check if checkmate
	return true;
}
void CKing::checkLegalMoves()
{

}
