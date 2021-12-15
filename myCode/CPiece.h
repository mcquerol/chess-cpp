#ifndef CPIECE_H
#define CPIECE_H


class CPiece {
protected:
    void checkNeighbors(unsigned int x, unsigned int y);
    int color;
    int score;
public:
    enum COLOR
    {
        WHITE = 0,
        BLACK = 1,
        EMPTY = 2
    };

    enum SCORE
    {
        PAWN = 1,
        KNIGHT = 3,
        BISHOP = 4, //TODO cannot be 3 because of conflict with knight. it has been adjusted in the bishop class
        ROOK = 5,
        QUEEN = 9,
		KING = 0
    };
    CPiece();
    CPiece(int color);
    virtual ~CPiece();
    virtual void checkLegalMoves();
    int getColor();
    int getScore();
};
#endif /* CPIECE_H */
