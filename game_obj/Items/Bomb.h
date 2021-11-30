#ifndef OOP_GAME_BOMB_H
#define OOP_GAME_BOMB_H

#include "Items.h"
#include "../Characters/Characters.h"


class Bomb: public Items{
    int dmg;

public:
    Bomb(int dmg = 10): dmg(dmg) {}

    bool interact(Characters* ch) override{
        ch->change_hp(-dmg);
        notify("BOOM!!!\n");
        return true;
    }
};

#endif //OOP_GAME_BOMB_H
