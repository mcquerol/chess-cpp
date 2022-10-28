
#ifndef CBOARD_H
#define CBOARD_H
#include "CPiece.h"
class CBoard {

public:

    CPiece** board;
    CBoard();
    ~CBoard();
};

#endif /* CBOARD_H */