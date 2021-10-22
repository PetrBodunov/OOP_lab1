#ifndef OOP_GAME_BOMB_H
#define OOP_GAME_BOMB_H

#include "Items.h"

class Bomb: public Items{
    int dmg;

public:
    bool interact(Characters* ch) override{
        ch->set_hp(-dmg);
    }
};

#endif //OOP_GAME_BOMB_H
