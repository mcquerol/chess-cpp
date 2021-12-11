/***************************************************************************
*============= Copyright by Darmstadt University of Applied Sciences =======
****************************************************************************
* Filename        : CPAWN.H
* Author          :
* Description     :
*
*
****************************************************************************/

#ifndef CPAWN_H
#define CPAWN_H
#include "CPiece.h"
class CPawn : public CPiece {
public:

    CPawn(int color);

     void checkLegalMoves();
};
/********************
**  CLASS END
*********************/
#endif /* CPAWN_H */
