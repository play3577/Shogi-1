#ifndef SHOGI_GAME_H
#define SHOGI_GAME_H
#include "../../ShogiCore/API/ShogiGameAPI.h"
#include "Scene.h"

/**
 * @brief Сцена, содержащая игровой процесс.
 */
class Game : public Scene
{

public:

    explicit Game(bool newGame = true);

    virtual void show();
    virtual ~Game();

private:
    /**
     * @brief Ввод
     *
     * Метод обрабатывает входную команду.
     */
    void input();

    /**
     * @brief Остновить
     *
     * Останавливает игровой цикл
     */
    void stop();

    /**
     * @brief Отрисовать
     *
     * Распечатывает доску и обрабатывает полученные
     * сообщения
     */
    void print();

    /**
     * @brief Распечатать сообщения
     *
     * Распечатывает и обрабатывает сообщения
     */
    void printMessages(shogi::ListOfGameSituations &list);

    /**
     * @brief Распечатать доску
     *
     * Отрисовывает доску в консоли
     */
    void printBoard(shogi::AbstractBoard &board) const;

    /**
     * @brief Распечатать список захваченных фигур.
     *
     * @param player Игрок, чьи фигуры будут
     * выведены на экран
     */
    void printListOfCapturedPieces(const shogi::Player &player) const;

    bool checkPosition(int horizontal, int vertical) const;

    bool pick() const;
    bool unpick() const;
    bool move() const;
    bool drop() const;
    bool undo() const;
    bool redo() const;
    bool save() const;
    bool load() const;

    int countPieces(const shogi::PieceType pieceType, const shogi::Player &player, const shogi::ListOfPieces &pieces) const;

    shogi::ShogiGameAPI *game;
    bool isRun = false;

    const std::map<std::string,int> tableOfCommands =
        {
            {"pick",    0},
            {"unpick",  1},
            {"move",    2},
            {"drop",    3},
            {"exit",    4},
            {"show",    5},
            {"undo",    6},
            {"redo",    7},
            {"save",    8},
            {"load",    9}
        };

    const std::map<std::string, shogi::PieceType> tableOfTypes =
        {
            {"pawn",            shogi::Pawn},
            {"king",            shogi::King},
            {"golden general",  shogi::GoldGeneral},
            {"rook",            shogi::Rook},
            {"bishop",          shogi::Bishop},
            {"silver general",  shogi::SilverGeneral},
            {"knight",          shogi::Knight},
            {"lance",           shogi::Lance}
        };

    const std::map<shogi::PieceType, std::string> tableOfLabels =
        {
            {shogi::King,                   "nK"},
            {shogi::GoldGeneral,            "nG"},
            {shogi::Rook,                   "nR"},
            {shogi::Bishop,                 "nB"},
            {shogi::SilverGeneral,          "nS"},
            {shogi::Knight,                 "nH"},
            {shogi::Lance,                  "nL"},
            {shogi::Pawn,                   "nP"},
            {shogi::PromotedRook,           "pR"},
            {shogi::PromotedBishop,         "pB"},
            {shogi::PromotedSilverGeneral,  "pS"},
            {shogi::PromotedKnight,         "pH"},
            {shogi::PromotedLance,          "pL"},
            {shogi::PromotedPawn,           "pP"}};

    const std::map<shogi::Player, std::string> tableOfPlayers =
        {
            {shogi::Sente, "Sente"},
            {shogi::Gote,  "Gote"}
        };
};


#endif //SHOGI_GAME_H
