#ifndef SHOGI_COMMAND_H
#define SHOGI_COMMAND_H

#include "../ConsoleGame.h"

namespace APP {


    class Command {
    public:
        virtual void execute() = 0;

        virtual ~Command() { }
    };
}

#endif //SHOGI_COMMAND_H
