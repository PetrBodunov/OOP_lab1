#ifndef OOP_GAME_MEDICINE_H
#define OOP_GAME_MEDICINE_H

#include "Items.h"
#include "../Characters/Characters.h"

class Medicine: public Items{
private:
    int hp_up;

public:
    bool interact(Characters& ch) override{
        ch.set_hp(hp_up);
    }
};

#endif //OOP_GAME_MEDICINE_H
