#include <iostream>
#include "./field/Field_Builder.h"
#include "./views/Field_View.h"
#include "game_obj/Characters/Heroes/Hero.h"
#include "game_obj/Items/Armor.h"
#include "game_obj/Items/Weapon.h"
#include "game_obj/Items/Medicine.h"
#include "game_obj/Items/Bomb.h"


int main(){
    Field f = Field_Builder(5,5).without_walls_build();
    Field_View view_f(&f);
    view_f.print_Field();

    std::cout << "--------------------\n";

    Hero* h = new Hero();
    Weapon* w1 = new Weapon(10);
    Armor* a1 = new Armor(10);
    Medicine* m1 = new Medicine(10);
    Fransis* fr = new Fransis();
    Gangster* g = new Gangster();
    Hoodlum* hm = new Hoodlum();


    f.get(0,1).put_game_obj(h);
    f.get(3,3).put_game_obj(w1);
    f.get(4,2).put_game_obj(a1);
    f.get(2,2).put_game_obj(m1);
    f.get(3,1).put_game_obj(fr);
    f.get(2,3).put_game_obj(g);
    f.get(3,4).put_game_obj(hm);
    view_f.print_Field();

    std::cout << "--------------------\n";

////interact
//    h->interact(g);
//    std::cout << h->get_hp() << "\n";
//    std::cout << g->get_hp() << "\n";
//
//    Weapon* w2 = new Weapon(50);
//    w2->interact(h);
//
//    std::cout << "\n";
//
//    h->interact(fr);
//    fr->interact(h);
//    std::cout << h->get_hp() << "\n";
//    std::cout << fr->get_hp() << "\n";
//
//    std::cout << "\n";
//
//    m1->interact(h);
//    std::cout << h->get_hp() << "\n";
//
//    std::cout << "\n";
//
//    m1->interact(h);
//    std::cout << h->get_hp() << "\n";
//
//    std::cout << "--------------------\n";


////test interact with item
//    f.get(0,1).move_game_obj(f.get(2,2));
//    view_f.print_Field();
//
//    std::cout << "--------------------\n";


////test interact with character
//    f.get(0,1).move_game_obj(f.get(2,3));
//    f.get(0,1).move_game_obj(f.get(2,3));
//    f.get(0,1).move_game_obj(f.get(2,3));
//    f.get(0,1).move_game_obj(f.get(2,3));
//    f.get(0,1).move_game_obj(f.get(2,3));
//
//    std::cout << "Hero's hp "<< h->get_hp() << "\n";
//    std::cout << "Gangster's hp "<< g->get_hp() << "\n";
//    view_f.print_Field();
//    std::cout << "--------------------\n";
//
//    f.get(2,3).move_game_obj(f.get(3,1));
//    f.get(2,3).move_game_obj(f.get(3,1));
//    f.get(2,3).move_game_obj(f.get(3,1));
//    f.get(2,3).move_game_obj(f.get(3,1));
//    f.get(2,3).move_game_obj(f.get(3,1));
//    f.get(2,3).move_game_obj(f.get(3,1));
//    f.get(2,3).move_game_obj(f.get(3,1));
//    f.get(2,3).move_game_obj(f.get(3,1));
//
//    std::cout << "Hero's hp "<< h->get_hp() << "\n";
//    std::cout << "Fransis's hp "<< fr->get_hp() << "\n";
//    view_f.print_Field();
//    std::cout << "--------------------\n";
}