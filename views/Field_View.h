#ifndef OOP_GAME_FIELD_VIEW_H
#define OOP_GAME_FIELD_VIEW_H

#include "../game_obj/Characters/Enemies/Fransis.h"
#include "../game_obj/Characters/Enemies/Hoodlum.h"
#include "../game_obj/Characters/Enemies/Gangster.h"
#include "../game_obj/Items/Armor.h"
#include "../game_obj/Items/Weapon.h"
#include "../game_obj/Items/Medicine.h"
#include "../game_obj/Characters/Heroes/Hero.h"
#include "../field/cells/Cell.h"
#include "../field/cells/Entrance.h"
#include "../field/cells/Exit.h"
#include "../field/cells/Wall.h"
#include "../field/Field.h"
#include <map>

class Field_View{
private:
    Field* f = nullptr;
    std::map<size_t, std::string> display = {
            {typeid(Cell).hash_code(), ".  "},
            {typeid(Wall).hash_code(), "*  "},
            {typeid(Entrance).hash_code(), "s  "},
            {typeid(Exit).hash_code(), "f  "},
            {typeid(Hero).hash_code(), "H  "},
            {typeid(Armor).hash_code(), "a  "},
            {typeid(Medicine).hash_code(), "m  "},
            {typeid(Fransis).hash_code(),  "Fr "},
            {typeid(Gangster).hash_code(), "G  "},
            {typeid(Hoodlum).hash_code(), "Hm "}
    };

public:
    Field_View() = default;

    Field_View(Field* f);

    void print_Field();
};

#endif //OOP_GAME_FIELD_VIEW_H
