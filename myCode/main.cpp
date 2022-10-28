// Standard (system) header files
#include <iostream>
#include <stdlib.h>
#include <string>

#include "CBoard.h"
#include "CConsoleView.h"
#include "CPlayer.h"


using namespace std;


int main (void)
{

	//test input

	char y,ny;
	int x,nx;
	CBoard b;
	CConsoleView screen;
	CPlayer player(0);
	screen.print(b.board);
	cout << "enter the coordinates" << endl;
	cin >> y;
	cin >> x;
	cin >> ny;
	cin >> nx;
	player.makeMove(x,(int)y-64 ,nx,(int)ny-64,b.board);
	screen.print(b.board);


	return 0;
}


//TODO possible moves for each piece
//TODO scoring system
//TODO coordinate input operator overloading
