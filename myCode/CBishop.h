#ifndef CBISHOP_H
#define CBISHOP_H
#include "CPiece.h"
class CBishop : public CPiece {
public:

    CBishop(int color);
    void checkLegalMoves();
};

#endif /* CBISHOP_H */
