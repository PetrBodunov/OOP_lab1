#ifndef OOP_GAME_WALL_H
#define OOP_GAME_WALL_H

#include "Abstract_cell.h"

class Wall: public Abstract_cell{
public:
    bool put_game_obj(Game_obj* game_obj) override {
        return false;
    }

    Abstract_cell *copy() override {
        return new Wall;
    }
};

#endif //OOP_GAME_WALL_H
