#ifndef OOP_GAME_GAME_OBJ_H
#define OOP_GAME_GAME_OBJ_H

#include <iostream>
#include "../logger/Logable.h"
#include "Game_obj_classes.h"

class Game_obj: public Logable{
public:
    virtual bool interact(Game_obj* ch) = 0;

    virtual ~Game_obj() = default;
};

#endif //OOP_GAME_GAME_OBJ_H
