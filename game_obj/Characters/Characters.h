#ifndef OOP_GAME_CHARACTERS_H
#define OOP_GAME_CHARACTERS_H

#include "../Game_obj.h"

class Characters: public Game_obj{
private:
    int max_hp;
    int cur_hp;
    Weapon* cur_weapon;
    Armor* cur_armor;

public:
    Characters(int max_hp, Weapon* cur_weapon = nullptr, Armor* cur_armor = nullptr);

    bool interact(Characters* other);

    void incr_hp(int hp);

    void set_weapon(Weapon* weapon);

    void set_armor(Armor* armor);

    int get_hp();

    int get_weapon();

    int get_armor();

    std::string get_info();
};

#endif //OOP_GAME_CHARACTERS_H
