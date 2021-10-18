#include "Characters.h"

Characters::Characters(int hp, int weapon, int armor) : hp(hp), weapon(weapon), armor(armor) {}

bool Characters::interact(Characters &other) {
    std::cout << "Fight\n";
    int a = (other.armor - weapon);
    a = (a < 0) ? a : 0;
    other.wound(a);
    return other.hp > 0;
}

bool Characters::interact(Item &other) {
    std::cout << "You interact with item";
}

void Characters::wound(int hp) {
    this->hp += hp;
}

void Characters::change_weapon(int weapon) {
    this->weapon = weapon;
}

void Characters::change_armor(int armor) {
    this->armor = armor;
}

int Characters::get_hp() {
    return hp;
}

int Characters::get_weapon() {
    return weapon;
}

int Characters::get_armor() {
    return armor;
}