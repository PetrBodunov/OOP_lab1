#ifndef OOP_GAME_BACKPACK_H
#define OOP_GAME_BACKPACK_H

#include "../../Items/Items.h"

class Backpack{
    int capacity;
    Items** arr_items;

public:
    Backpack(int capacity);

    void append(Items* el);
};

#endif //OOP_GAME_BACKPACK_H
