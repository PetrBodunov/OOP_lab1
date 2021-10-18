#ifndef OOP_GAME_ITEMS_H
#define OOP_GAME_ITEMS_H

#include "../Game_obj.h"
#include "../Game_obj_classes.h"

class Items: public Game_obj{
    bool interact(Game_obj *game_obj) override;

    bool interact(Characters& ch) override;

    bool interact(Items& it) = 0;

};

#endif //OOP_GAME_ITEMS_H
