#ifndef OOP_GAME_ITEMS_H
#define OOP_GAME_ITEMS_H

#include "../Game_obj.h"
#include "../Game_obj_classes.h"

class Items: public Game_obj{
    bool interact(Game_obj* ch) override{
        return interact((Characters*)ch);
    }

    virtual bool interact(Characters* ch){}

};

#endif //OOP_GAME_ITEMS_H
