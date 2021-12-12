#include "CPawn.h"

CPawn::CPawn(int color): CPiece(color)
{
	this->color = color;
	this->score = PAWN;
}
void CPawn::checkLegalMoves()
{

}
