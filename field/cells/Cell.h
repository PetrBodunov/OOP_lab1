#ifndef OOP_GAME_CELL_H
#define OOP_GAME_CELL_H

#include "Abstract_cell.h"

class Cell: public Abstract_cell{
public:

    bool put_game_obj(Game_obj* game_obj) override {
        if (!game_obj) {
            this->game_obj = game_obj;
            return true;
        }
        return false;
    }

    Abstract_cell *copy() override {
        return new Cell;
    }
};

#endif //OOP_GAME_CELL_H
