#ifndef OOP_GAME_BOMB_H
#define OOP_GAME_BOMB_H

#include "Items.h"

class Bomb: public Items{
    int dmg;

public:
    bool interact(Characters* ch) override{
        ch->incr_hp(-dmg);
        noify();
        return true;
    }

    std::string get_info() override{
        return "BOOM!!!\n";
    }
};

#endif //OOP_GAME_BOMB_H
