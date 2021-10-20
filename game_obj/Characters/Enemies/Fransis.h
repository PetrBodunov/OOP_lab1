#ifndef OOP_GAME_FRANSIS_H
#define OOP_GAME_FRANSIS_H

#include "../Characters.h"
#include "../../Items/Weapon.h"
#include "../../Items/Armor.h"

class Fransis: public Characters{
public:
    Fransis(): Characters(200, new Weapon(20), new Armor(20)) {}
};

#endif //OOP_GAME_FRANSIS_H
