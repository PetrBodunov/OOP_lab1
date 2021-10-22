#ifndef OOP_GAME_ARMOR_H
#define OOP_GAME_ARMOR_H

#include "Items.h"
#include "../Characters/Characters.h"

class Armor: public Items{
    int def;

public:
    Armor(int def = 0): def(def){}

    bool interact(Characters *ch) override{
        ch->set_armor(this);
    }

    int get_def(){
        return def;
    }
};

#endif //OOP_GAME_ARMOR_H
