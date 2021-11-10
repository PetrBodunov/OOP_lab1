#ifndef OOP_GAME_MEDICINE_H
#define OOP_GAME_MEDICINE_H

#include "Items.h"
#include "../Characters/Characters.h"

class Medicine: public Items{
private:
    int hp_up;

public:

    Medicine(int hp_up): hp_up(hp_up) {}

    bool interact(Characters* ch) override{
        ch->incr_hp(hp_up);
        noify();
        return true;
    }

    std::string get_info() override{
        return "Pick up medicine\n";
    }
};

#endif //OOP_GAME_MEDICINE_H
