#include "BoardMemento.h"

using namespace shogi;

BoardMemento::BoardMemento(Board *board) noexcept : board(board)
{
    this->capturedPieces[Sente] = board->getCapturedPieces(Sente);
    this->capturedPieces[Gote]  = board->getCapturedPieces(Gote);

    for (Piece *piece : board->getPiecesOnBoard())
    {
        PieceInfo info;
        info.piece = piece;
        info.player = piece->getPlayer();
        info.square = piece->getSquare();
        info.promote = piece->wasPromoted();
        pairs.push_back(info);
    }
}

void BoardMemento::restore() noexcept
{
    for (Piece *piece : board->getPiecesOnBoard())
    {
        piece->getSquare()->setPiece(nullptr);
        piece->setSquare(nullptr);
    }

    board->getPiecesOnBoard().clear();

    for (PieceInfo pieceInfo : pairs)
    {
        board->setPiece(pieceInfo.piece, pieceInfo.square->getPosition());
        pieceInfo.piece->setPlayer(pieceInfo.player);
        if(pieceInfo.promote)
        {
            pieceInfo.piece->promote();
        }
        else
        {
            pieceInfo.piece->unPromote();
        }
    }

    board->getCapturedPieces(Sente).clear();
    board->getCapturedPieces(Gote).clear();
    board->getCapturedPieces(Sente) = capturedPieces.at(Sente);
    board->getCapturedPieces(Gote)  = capturedPieces.at(Gote);
}


