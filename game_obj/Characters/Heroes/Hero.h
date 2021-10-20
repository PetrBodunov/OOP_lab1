#ifndef OOP_GAME_HERO_H
#define OOP_GAME_HERO_H

#include "../Characters.h"
#include "../../Items/Weapon.h"
#include "../../Items/Armor.h"

class Hero: public Characters{
public:
    Hero(): Characters(100, new Weapon(20), new Armor(10)) {}
};

#endif //OOP_GAME_HERO_H
