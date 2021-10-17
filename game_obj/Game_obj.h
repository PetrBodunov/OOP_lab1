#ifndef OOP_GAME_GAME_OBJ_H
#define OOP_GAME_GAME_OBJ_H

class Game_obj{
public:
    virtual bool interact(Game_obj* game_obj) = 0;
};

#endif //OOP_GAME_GAME_OBJ_H
