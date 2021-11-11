#ifndef OOP_GAME_ENTRANCE_H
#define OOP_GAME_ENTRANCE_H

#include "Cell.h"

class Entrance: public Cell{
public:
    Abstract_cell *copy() override {
        return new Entrance;
    }

    ~Entrance(){
        if (game_obj)
            delete game_obj;
    }
};

#endif //OOP_GAME_ENTRANCE_H
