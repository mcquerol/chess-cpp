/***************************************************************************
*============= Copyright by Darmstadt University of Applied Sciences =======
****************************************************************************
* Filename        : CKING.H
* Author          :
* Description     :
*
*
****************************************************************************/

#ifndef CKING_H
#define CKING_H
#include "CPiece.h"
class CKing : public CPiece {

public:

    CKing(int color);

    bool isCheckMate();

    void checkLegalMoves();
};
/********************
**  CLASS END
*********************/
#endif /* CKING_H */
