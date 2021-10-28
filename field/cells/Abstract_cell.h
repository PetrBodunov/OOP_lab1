#ifndef OOP_GAME_ABSTRACT_CELL_H
#define OOP_GAME_ABSTRACT_CELL_H

#include "../../game_obj/Game_obj.h"

class Abstract_cell{
protected:
    Game_obj* game_obj = nullptr;

public:
    Abstract_cell() = default;

    virtual bool put_game_obj(Game_obj* game_obj) = 0;

    Game_obj* get_game_obj(){
        return game_obj;
    }

    bool move_game_obj(Abstract_cell& other){
        if (game_obj && other.put_game_obj(game_obj)){
            game_obj = nullptr;
            return true;
        }
        return false;
    }
    virtual Abstract_cell* copy() = 0;

    virtual ~Abstract_cell() = default;
};

#endif //OOP_GAME_ABSTRACT_CELL_H
