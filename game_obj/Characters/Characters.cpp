#include "Characters.h"
#include "../Items/Weapon.h"
#include "../Items/Armor.h"

Characters::Characters(int max_hp, Weapon* cur_weapon, Armor* cur_armor) : max_hp(max_hp), cur_hp(max_hp), cur_weapon(cur_weapon), cur_armor(cur_armor) {}

bool Characters::interact(Game_obj *oth) {
    if (dynamic_cast<Characters*>(oth)) {
        auto other = dynamic_cast<Characters*>(oth);
        int a = (other->get_armor() - get_weapon());
        a = (a < 0) ? a : 0;
        other->change_hp(a);
        return other->cur_hp > 0;
    }
}

void Characters::change_hp(int hp) {
    cur_hp = std::min(cur_hp + hp, max_hp);
    notify("Change hp to " + std::to_string(cur_hp));
}

void Characters::set_weapon(Weapon *weapon) {
    if (cur_weapon){
        delete cur_weapon;
        int dm = weapon->get_dmg();
        delete weapon;
        cur_weapon = new Weapon(dm);
    }
    notify("Current weapon with " + std::to_string(get_weapon()) + " damage\n");
}

void Characters::set_armor(Armor *armor) {
    if (cur_armor) {
        delete cur_armor;
        cur_armor = armor;
    }
    notify("Current armor with " + std::to_string(get_armor()) + " defence\n");
}

int Characters::get_hp() {
    return cur_hp;
}

int Characters::get_weapon() {
    return cur_weapon->get_dmg();
}

int Characters::get_armor() {
    return cur_armor->get_def();
}


Characters::~Characters() {
    if (cur_weapon)
        delete cur_weapon;
    if (cur_armor)
        delete cur_armor;
}