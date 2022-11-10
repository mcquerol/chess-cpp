#include "CConsoleView.h"
#include <iostream>

const char *k  = u8"\u2654";


using namespace std;

CConsoleView::CConsoleView()
{
	this->board = 0;
}
void CConsoleView::print(CPiece** board)
{

	cout << endl;
  	for(int row = 0; row < 8; row++)
	{
  		cout << 8-row << "| "; // row numbers
		for(int col = 0; col < 8; col++)
	    {
			//cout << "(" << row << "," << col << ") ";
			//white pieces
			if(board[row][col].getScore() == CPiece::PAWN && board[row][col].getColor() == CPiece::WHITE)
			{
				cout << 'P' << " ";
			}
			else if(board[row][col].getScore() == CPiece::ROOK && board[row][col].getColor() == CPiece::WHITE)
			{
				cout << 'R' << " ";
			}
			else if(board[row][col].getScore() == CPiece::KNIGHT && board[row][col].getColor() == CPiece::WHITE)
			{
				cout << 'N' << " ";
			}
			else if(board[row][col].getScore() == CPiece::BISHOP && board[row][col].getColor() == CPiece::WHITE)
			{
				cout << 'B' << " ";
			}
			else if(board[row][col].getScore() == CPiece::QUEEN && board[row][col].getColor() == CPiece::WHITE)
			{
				cout << 'Q' << " ";
			}
			else if(board[row][col].getScore() == CPiece::KING && board[row][col].getColor() == CPiece::WHITE)
			{
				  cout << k << " ";
			}
			//black pieces
			else if(board[row][col].getScore() == CPiece::PAWN && board[row][col].getColor() == CPiece::BLACK)
			{
				cout << 'p' << " ";
			}
			else if(board[row][col].getScore() == CPiece::ROOK && board[row][col].getColor() == CPiece::BLACK)
			{
				cout << 'r' << " ";
			}
			else if(board[row][col].getScore() == CPiece::KNIGHT && board[row][col].getColor() == CPiece::BLACK)
			{
				cout << 'n' << " ";
			}
			else if(board[row][col].getScore() == CPiece::BISHOP && board[row][col].getColor()== CPiece::BLACK)
			{
				cout << 'b' << " ";
			}
			else if(board[row][col].getScore() == CPiece::QUEEN && board[row][col].getColor() == CPiece::BLACK)
			{
				cout << 'q' << " ";
			}
			else if(board[row][col].getScore() == CPiece::KING && board[row][col].getColor() == CPiece::BLACK)
			{
				cout << 'k' << " ";
			}
			else
			{
				cout << '-' << " ";
			}
	    }
		cout << endl;
	}
  	cout << "   ---------------" << endl;
  	cout << "  ";
	for(int col = 0; col < 8; col++)
	{
		char c = col+1+64;
		cout << " " << c; //column numbers
	}
	cout<<endl;






//	cout << endl;
//  	for(int row = 0; row < 8; row++)
//	{
//  		cout << 8-row << "| "; // row numbers
//		for(int col = 0; col < 8; col++)
//	    {
//			cout << "(" << row << "," << col << ") ";
//	    }
//		cout << endl;
//	}
//  	cout << "   ---------------" << endl;
//  	cout << "  ";
//	for(int col = 0; col < 8; col++)
//	{
//		char c = col+1+64;
//		cout << " " << c; //column numbers
//	}
}
