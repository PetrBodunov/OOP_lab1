#ifndef OOP_GAME_GANGSTER_H
#define OOP_GAME_GANGSTER_H

#include "../Characters.h"
#include "../../Items/Weapon.h"
#include "../../Items/Armor.h"

class Gangster: public Characters{
public:
    Gangster(): Characters(50, new Weapon(15), new Armor(10)) {}
};

#endif //OOP_GAME_GANGSTER_H
