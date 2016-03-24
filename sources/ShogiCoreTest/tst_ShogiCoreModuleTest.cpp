#include <QString>
#include <QtTest>
#include <iostream>
#include "../ShogiCore/Model/BoardMemento.h"
#include "../ShogiCore/Shogi.h"
#include "../ShogiCore/GameLogic/ShogiGameLogic.h"

class ShogiCoreModuleTest : public QObject
{
Q_OBJECT

public:
    ShogiCoreModuleTest();

private Q_SLOTS:
    void mementoTest();
    void gameLogicTest();


private:

};

ShogiCoreModuleTest::ShogiCoreModuleTest()
{

}
void ShogiCoreModuleTest::mementoTest() {
    Piece *p1 = new Piece(Rook, Sente);
    Piece *p2 = new Piece(King, Gote);
    Shogi game;
    game.getBoard().setPiece(p1, Position(2, 2));
    game.getBoard().setPiece(p2, Position(4, 5));
    BoardMemento bm(&game.getBoard());
    game.getBoard().removePiece(Position(2, 2));
    game.getBoard().removePiece(Position(4, 5));
    QVERIFY(game.getBoard().getPiece(Position(2, 2)) == nullptr);
    QVERIFY(game.getBoard().getPiece(Position(4, 5)) == nullptr);
    bm.restore();
    QVERIFY(game.getBoard().getPiece(Position(2, 2)) == p1);
    QVERIFY(game.getBoard().getPiece(Position(4, 5)) == p2);

}

void ShogiCoreModuleTest::gameLogicTest()
{
    Board board;
    Piece *p1 = new Piece(Rook, Sente);
    Piece *p2 = new Piece(King, Sente);
    ShogiGameLogic g(board);
    board.setPiece(p1, Position(2,2));
    board.setPiece(p2, Position(5,5));
    QVERIFY(g.checkMove(p1,Position(2,4)));
    QVERIFY(g.checkMove(p2,Position(5,6)));

}


QTEST_APPLESS_MAIN(ShogiCoreModuleTest)

#include "tst_ShogiCoreModuleTest.moc"


