#ifndef OOP_GAME_HOODLUM_H
#define OOP_GAME_HOODLUM_H

#include "../Characters.h"
#include "../../Items/Weapon.h"
#include "../../Items/Armor.h"

class Hoodlum: public Characters{
public:
    Hoodlum(): Characters(100, new Weapon(20), new Armor(15)) {}
};

#endif //OOP_GAME_HOODLUM_H
