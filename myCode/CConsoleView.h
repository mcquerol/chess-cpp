#ifndef CCONSOLEVIEW_H
#define CCONSOLEVIEW_H
#include "CBoard.h"
class CConsoleView {
private:
	CPiece** board;
public:
    CConsoleView();
    void print(CPiece** board);
};

#endif /* CCONSOLEVIEW_H */
