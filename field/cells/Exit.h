#ifndef OOP_GAME_EXIT_H
#define OOP_GAME_EXIT_H

#include "Cell.h"

class Exit: public Cell{
public:
    Abstract_cell *copy() override {
        return new Exit;
    }

    ~Exit(){
        if (game_obj)
            delete game_obj;
    }
};

#endif //OOP_GAME_EXIT_H
