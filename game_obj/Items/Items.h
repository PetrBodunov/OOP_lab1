#ifndef OOP_GAME_ITEMS_H
#define OOP_GAME_ITEMS_H

#include "../Game_obj.h"
#include "../Game_obj_classes.h"

class Items: public Game_obj{
    bool interact(Characters* ch) override{
        std::cout << "Item interact with Character\n";
        return false;
    }
};

#endif //OOP_GAME_ITEMS_H
