#ifndef OOP_GAME_GAME_H
#define OOP_GAME_GAME_H

#include "../Rules/Rules.h"
#include "../field/Field_Builder.h"
#include "vector"
#include "../game_obj/Characters/Enemies/Fransis.h"
#include "../game_obj/Characters/Enemies/Gangster.h"
#include "../game_obj/Characters/Enemies/Hoodlum.h"
#include "../game_obj/Characters/Heroes/Hero.h"
#include "../game_obj/Items/Medicine.h"
#include "../game_obj/Items/Weapon.h"
#include "../game_obj/Items/Armor.h"
#include "../game_obj/Items/Bomb.h"
#include "../views/Field_View.h"
#include "../logger/Terminal_Logger.h"
#include "../logger/File_Logger.h"


template <template<int, int> class R, int enemycount, int itemcount>
class Game{
private:
    R<enemycount, itemcount> rule;
    Field* f;

    void move_enemies(){
        for (int i = 0; i < f->get_columns(); i++){
            for (int j = 0; j < f->get_rows(); j++){
                if ((f->get(i,j).get_game_obj()) && ((typeid(*(f->get(i,j).get_game_obj())) == typeid(Hoodlum)) || (typeid(*(f->get(i,j).get_game_obj())) == typeid(Fransis)) || (typeid(*(f->get(i,j).get_game_obj())) == typeid(Gangster)))){
                    move(i,j);
                }
            }
        }
    }

    bool move(int y, int x){
        if (0 <= y + 1 && y + 1 < f->get_columns()) {
            if (f->get(y, x).move_game_obj(f->get(y + 1, x)))
                return true;
        }

        if (0 <= x + 1 && x + 1 < f->get_rows()) {
            if (f->get(y, x).move_game_obj(f->get(y, x + 1)))
                return true;
        }

        if (0 <= y - 1 && y - 1 < f->get_columns()) {
            if (f->get(y, x).move_game_obj(f->get(y - 1, x)))
                return true;
        }

        if (0 <= x - 1 && x - 1 < f->get_columns()) {
            if (f->get(y, x).move_game_obj(f->get(y, x - 1)))
                return true;
        }

        return false;
    }


public:
    void start(){
        Hero* h = new Hero();

        Terminal_Logger* t1 = new Terminal_Logger("Hero :","\n");
        h->add_logger(t1);

        f->get(0,0).put_game_obj(h);
        Field_View view_f(f);

        std::vector<Game_obj*> enemies;
        std::vector<Game_obj*> items;

        switch (enemycount) {
            case 1:
                enemies.push_back(new Gangster);
                break;
            case 2:
                enemies.push_back(new Gangster);
                enemies.push_back(new Hoodlum);
                break;
            case 3:
                enemies.push_back(new Gangster);
                enemies.push_back(new Gangster);
                enemies.push_back(new Hoodlum);
                break;
            default:
                enemies.push_back(new Fransis);
                enemies.push_back(new Hoodlum);
                for (int i = 3; i < enemycount; i++)
                    enemies.push_back(new Gangster);
        }

        switch (itemcount) {
            case 1:
                items.push_back(new Medicine);
                break;
            case 2:
                items.push_back(new Medicine);
                items.push_back(new Weapon);
                break;
            case 3:
                items.push_back(new Medicine(50));
                items.push_back(new Medicine);
                items.push_back(new Weapon(50));
                break;
            default:
                items.push_back(new Armor(100));
                items.push_back(new Weapon(70));
                for (int i = 3; i < itemcount; i++)
                    items.push_back(new Medicine);
        }

        f->set_obj(enemies);
        f->set_obj(items);

        while (h->get_hp()>0){
            view_f.print_Field();
            std::cout << "\n";
            //move_enemies();
        }

    }

    void set_field(Field* other){
        f = other;
    }


//    void print(){
//        Field_View view_f(f);
//        view_f.print_Field();
//    }

};

#endif //OOP_GAME_GAME_H
