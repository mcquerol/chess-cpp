/***************************************************************************
*============= Copyright by Darmstadt University of Applied Sciences =======
****************************************************************************
* Filename        : CROOK.H
* Author          :
* Description     :
*
*
****************************************************************************/

#ifndef CROOK_H
#define CROOK_H
#include "CPiece.h"
class CRook : public CPiece {
public:

    CRook(int color);

     void checkLegalMoves();
};
/********************
**  CLASS END
*********************/
#endif /* CROOK_H */
