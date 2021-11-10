#ifndef OOP_GAME_WEAPON_H
#define OOP_GAME_WEAPON_H

#include "Items.h"
#include "../Characters/Characters.h"

class Weapon: public Items{
    int dmg;

public:
    Weapon(int dmg): dmg(dmg){}
    
    bool interact(Characters *ch) override{
        ch->set_weapon(this);
        noify();
        return true;
    }

    int get_dmg(){
        return dmg;
    }

    std::string get_info() override{
        return "Pick up a weapon \n";
    }
};

#endif //OOP_GAME_WEAPON_H
