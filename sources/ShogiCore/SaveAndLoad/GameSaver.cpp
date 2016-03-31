//
// Created by Yurij on 31.03.2016.
//

#include "GameSaver.h"

Save GameSaver::saveGame(AbstractBoard &board)
{
    Save save;
    for (Piece *piece: board.getPiecesOnBoard())
    {
        save.onBoard.push_back(Block(piece->getType(),piece->getPlayer(),
                                     piece->getPosition().getHorizontal(),piece->getPosition().getVertical()));
    }
    for(Piece *piece: board.getSenteCapturedPieces())
    {
        save.senteCaptured.push_back(piece->getType());
    }
    for(Piece *piece: board.getGoteCapturedPieces())
    {
        save.goteCaptured.push_back(piece->getType());
    }
    return save;
}