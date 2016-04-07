#ifndef SHOGI_UNDO_H
#define SHOGI_UNDO_H


#include "Command.h"

class Undo : public Command
{
public:
    Undo(ShogiGameAPI *game) : game(game) { }
    virtual void execute() override
    {
        try
        {
            game->undo();
        }
        catch(std::exception &e)
        {
            throw e;
        }
    }

private:
    ShogiGameAPI *game;
};


#endif //SHOGI_UNDO_H