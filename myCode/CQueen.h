#ifndef CQUEEN_H
#define CQUEEN_H
#include "CPiece.h"
class CQueen : public CPiece {
public:

    CQueen(int color);

    void checkLegalMoves();
};

#endif /* CQUEEN_H */
