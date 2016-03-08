#ifndef PIECE_H
#define PIECE_H
#include "enumirations.h"
#include "Square.h"

class Square;

class Piece
{
public:

    Piece(PieceType pt, Player pl, Square *sq=0);

    PieceType getType() const;
    Player getPlayer() const;
    Square *getSquare() const;

    inline bool wasPromoted() const;
    inline bool canBePromoted() const;

    void promote();
    void unPromote();

    void setSquare(Square *sq);
    void setPlayer(Player pl);

    ~Piece();

private:

    PieceType ptype;
    Player player;
    Square *sq;

    bool promoted;
    bool bePromoted;
};

#endif // PIECE_H