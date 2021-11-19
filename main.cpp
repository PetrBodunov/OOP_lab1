#include <iostream>
#include "./field/Field_Builder.h"
#include "./views/Field_View.h"
#include "game_obj/Characters/Heroes/Hero.h"
#include "game_obj/Items/Armor.h"
#include "game_obj/Items/Weapon.h"
#include "game_obj/Items/Medicine.h"
#include "game_obj/Items/Bomb.h"
#include "logger/Terminal_Logger.h"
#include "logger/File_Logger.h"

int main(){
    Field f = Field_Builder(5,5).without_walls_build();
    Field_View view_f(&f);
    view_f.print_Field();

    std::cout << "-----------------------------------------------------------\n";

    Hero* h = new Hero();
    Weapon* w1 = new Weapon(10);
    Armor* a1 = new Armor(10);
    Medicine* m1 = new Medicine(10);
    Fransis* fr = new Fransis();
    Gangster* g = new Gangster();
    Hoodlum* hm = new Hoodlum();

    Terminal_Logger* t1 = new Terminal_Logger("Hero :","\n");
    h->add_logger(t1);
    File_Logger* f1 = new File_Logger("File.log");
    m1->add_logger(f1);

    f.get(0,2).put_game_obj(h);
    f.get(3,3).put_game_obj(w1);
    f.get(4,2).put_game_obj(a1);
    f.get(2,2).put_game_obj(m1);
    f.get(3,1).put_game_obj(fr);
    f.get(2,3).put_game_obj(g);
    f.get(3,4).put_game_obj(hm);
    view_f.print_Field();

    std::cout << "---------------------------------------------------------------------\n";



    f.get(0,2).move_game_obj(f.get(0,1));
    view_f.print_Field();
    std::cout << "------------------------------------------------------\n";


    f.get(0,1).move_game_obj(f.get(2,3));
    f.get(0,1).move_game_obj(f.get(2,3));
    f.get(0,1).move_game_obj(f.get(2,3));
    f.get(0,1).move_game_obj(f.get(2,3));
    f.get(0,1).move_game_obj(f.get(2,3));


    std::cout << "---------------------------------------------------\n";

    f.get(2,3).move_game_obj(f.get(2,2));
    view_f.print_Field();

    std::cout << "--------------------------------------------------\n";

    f.get(2,2).move_game_obj(f.get(3,3));
    view_f.print_Field();
    f.get(3,3).move_game_obj(f.get(2,3));


    std::cout << "--------------------------------------------------\n";


    f.get(2,3).move_game_obj(f.get(3,1));
    f.get(2,3).move_game_obj(f.get(3,1));
    f.get(2,3).move_game_obj(f.get(3,1));
    f.get(2,3).move_game_obj(f.get(3,1));
    f.get(2,3).move_game_obj(f.get(3,1));
    f.get(2,3).move_game_obj(f.get(3,1));
    f.get(2,3).move_game_obj(f.get(3,1));
    f.get(2,3).move_game_obj(f.get(3,1));
    f.get(2,3).move_game_obj(f.get(3,1));

    view_f.print_Field();
    std::cout << "-------------------------------------------------------------\n\n\n";


}