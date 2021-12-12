
#ifndef CPLAYER_H
#define CPLAYER_H
#include "CPiece.h"
#include "CBoard.h"
class CPlayer {
private:
    int color;
public:

    void makeMove(unsigned int x, unsigned int y, unsigned int nx, unsigned int ny, CPiece** board);

    CPlayer(int color);
};

#endif /* CPLAYER_H */
