#include "CBoard.h"
#include "CPawn.h"
#include "CRook.h"
#include "CBishop.h"
#include "CKnight.h"
#include "CKing.h"
#include "CQueen.h"

const int noRows = 8;
const int noCols = 8;

CBoard::CBoard()
{

	board = new CPiece*[noRows];
	for(int index = 0; index < noRows; index++)
	{
		board[index] = new CPiece[noCols];
	}

	for(int row = 0; row < noRows; row++)
	{
		for(int col = 0; col < noCols; col++)
		{
			board[row][col] = CPiece::EMPTY;
		}
	}


	board[7][7] = CRook(CPiece::WHITE);
	board[7][6] = CKnight(CPiece::WHITE);
	board[7][5] = CBishop(CPiece::WHITE);
	board[7][4] = CKing(CPiece::WHITE);
	board[7][3] = CQueen(CPiece::WHITE);
	board[7][2] = CBishop(CPiece::WHITE);
	board[7][1] = CKnight(CPiece::WHITE);
	board[7][0] = CRook(CPiece::WHITE);

	for(int i = 0; i < 8; i++)
	{
		board[6][i] = CPawn(CPiece::WHITE);
	}

	board[0][7] = CRook(CPiece::BLACK);
	board[0][6] = CKnight(CPiece::BLACK);
	board[0][5] = CBishop(CPiece::BLACK);
	board[0][4] = CKing(CPiece::BLACK);
	board[0][3] = CQueen(CPiece::BLACK);
	board[0][2] = CBishop(CPiece::BLACK);
	board[0][1] = CKnight(CPiece::BLACK);
	board[0][0] = CRook(CPiece::BLACK);

	for(int i = 0; i < 8; i++)
	{
		board[1][i] = CPawn(CPiece::BLACK);
	}
}
CBoard::~CBoard()
{
	for(int index = 0; index < noRows; index++)
	{
		delete [] board[index];
	}
	delete [] board;
}
