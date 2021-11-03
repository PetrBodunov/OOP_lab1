#ifndef OOP_GAME_CELL_H
#define OOP_GAME_CELL_H

#include "Abstract_cell.h"
#include "../../game_obj/Characters/Characters.h"
#include "../../game_obj/Items/Items.h"

class Cell: public Abstract_cell{
public:

    bool put_game_obj(Game_obj* other) override {
        if (!this->game_obj) {
            this->game_obj = other;
            return true;
        }
        else if (dynamic_cast<Items*>(game_obj)) {
            game_obj->interact((dynamic_cast<Characters*>(other)));
            delete this->game_obj;
            this->game_obj = other;
            return true;
        }
        else {
            if (!other->interact((dynamic_cast<Characters *>(game_obj)))) {
                delete this->game_obj;
                this->game_obj = other;
                return true;
            }

            if (!game_obj->interact((dynamic_cast<Characters *>(other)))) {
                delete other;
                return true;
            }
        }
        return false;
    }

    Abstract_cell *copy() override {
        return new Cell;
    }
};

#endif //OOP_GAME_CELL_H
