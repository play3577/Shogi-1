#ifndef SHOGI_MATE_H
#define SHOGI_MATE_H

#include "GameSituation.h"

namespace shogi
{
	/**
	 * @brief Игровая ситуация "Мат"
	 */
    class Mate : public GameSituation
    {

    public:
        Mate() : GameSituation()
        {
            endOfGame = true;
        }

        std::string getMessage() const
        {
            return "Mate! Game is over";
        }
    };
}

#endif //SHOGI_MATE_H
