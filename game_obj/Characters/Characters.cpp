#include "../Items/Weapon.h"
#include "../Items/Armor.h"

Characters::Characters(int max_hp, Weapon* cur_weapon, Armor* cur_armor) : max_hp(max_hp), cur_hp(max_hp), cur_weapon(cur_weapon), cur_armor(cur_armor) {}

bool Characters::interact(Characters *other) {
    std::cout << "Fight\n";
    int a = (other->get_armor() - get_weapon());
    a = (a < 0) ? a : 0;
    other->incr_hp(a);
    return other->cur_hp > 0;
}

void Characters::incr_hp(int hp) {
    cur_hp = std::min(cur_hp + hp, max_hp);
}

void Characters::set_weapon(Weapon *weapon) {
    cur_weapon = weapon;
}

void Characters::set_armor(Armor *armor) {
    cur_armor = armor;
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

std::string Characters::get_info() {
    return "Hero:\nMax hp: " + std::to_string(max_hp) + "\nСurrent hp: " + std::to_string(cur_hp) + "\nArmor: " + std::to_string(get_armor()) + "\nWeapon: " + std::to_string(get_weapon());
}