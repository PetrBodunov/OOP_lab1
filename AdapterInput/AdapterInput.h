#ifndef OOP_GAME_ADAPTERINPUT_H
#define OOP_GAME_ADAPTERINPUT_H

#include "Action.h"

class AdapterInput{
public:
    virtual Action getAction() = 0;
};

#endif //OOP_GAME_ADAPTERINPUT_H
