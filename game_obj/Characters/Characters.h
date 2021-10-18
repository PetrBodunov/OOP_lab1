#ifndef OOP_GAME_CHARACTERS_H
#define OOP_GAME_CHARACTERS_H

#include "../Game_obj.h"

class Characters: public Game_obj{
protected:
    int max_hp;
    int cur_hp;
    weapon, armor;

public:
    Characters(int hp, int weapon, int armor);

    bool interact(Characters& other);

    bool interact(Item& other);

    void set_hp(int hp);

    void set_weapon(int weapon);

    void set_armor(int armor);

    int get_hp();

    int get_weapon();

    int get_armor();
};

#endif //OOP_GAME_CHARACTERS_H
