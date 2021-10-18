#ifndef OOP_GAME_GAME_OBJ_H
#define OOP_GAME_GAME_OBJ_H

#include <iostream>
#include "Game_obj_classes.h"

class Game_obj{
public:
    virtual bool interact(Game_obj* game_obj) = 0;

    virtual bool interact(Characters& ch) = 0;

    virtual bool interact(Items& it) = 0;
};

#endif //OOP_GAME_GAME_OBJ_H
