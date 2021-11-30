#ifndef OOP_GAME_MEDICINE_H
#define OOP_GAME_MEDICINE_H

#include "Items.h"
#include "../Characters/Characters.h"

class Medicine: public Items{
private:
    int hp_up;

public:
    Medicine(int hp_up = 10): hp_up(hp_up) {}

    bool interact(Characters* ch) override{
        ch->change_hp(hp_up);
        notify("Pick up a medicine\n");
        return true;
    }
};

#endif //OOP_GAME_MEDICINE_H
