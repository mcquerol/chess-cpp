
#ifndef CKNIGHT_H
#define CKNIGHT_H
#include "CPiece.h"
class CKnight : public CPiece {
public:

    CKnight(int color);

    void checkLegalMoves();
};

#endif /* CKNIGHT_H */
