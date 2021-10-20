#include "Field_View.h"

Field_View::Field_View(Field *f) : f(f) {}

void Field_View::print_Field(){
    if (f) {
        for (int i = 0; i < f->rows; i++) {
            for (int j = 0; j < f->columns; j++) {
                if (!f->cells[i][j]->get_game_obj()) {
                    if (typeid(*(f->cells[i][j])).hash_code() == typeid(Cell).hash_code())
                        std::cout << ".  ";
                    if (typeid(*(f->cells[i][j])).hash_code() == typeid(Wall).hash_code())
                        std::cout << "*  ";
                    if (typeid(*(f->cells[i][j])).hash_code() == typeid(Entrance).hash_code())
                        std::cout << "s  ";
                    if (typeid(*(f->cells[i][j])).hash_code() == typeid(Exit).hash_code())
                        std::cout << "f  ";
                } else{
                    if (typeid(*(f->cells[i][j]->get_game_obj())).hash_code() == typeid(Hero).hash_code())
                        std::cout << "H  ";
                    if (typeid(*(f->cells[i][j]->get_game_obj())).hash_code() == typeid(Armor).hash_code())
                        std::cout << "a  ";
                    if (typeid(*(f->cells[i][j]->get_game_obj())).hash_code() == typeid(Weapon).hash_code())
                        std::cout << "w  ";
                    if (typeid(*(f->cells[i][j]->get_game_obj())).hash_code() == typeid(Medicine).hash_code())
                        std::cout << "m  ";
                    if (typeid(*(f->cells[i][j]->get_game_obj())).hash_code() == typeid(Fransis).hash_code())
                        std::cout << "Fr ";
                    if (typeid(*(f->cells[i][j]->get_game_obj())).hash_code() == typeid(Gangster).hash_code())
                        std::cout << "G  ";
                    if (typeid(*(f->cells[i][j]->get_game_obj())).hash_code() == typeid(Hoodlum).hash_code())
                        std::cout << "Hm ";
                }
            }
            std::cout << "\n";
        }
    }
}

