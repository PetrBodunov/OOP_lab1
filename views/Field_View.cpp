#include "Field_View.h"

Field_View::Field_View(Field *f) : f(f) {}

void Field_View::print_Field(){
    if (f) {
        for (int i = f->columns - 1; i >= 0; i--) {
            for (int j = 0; j < f->rows; j++) {
                if (!f->cells[i][j]->get_game_obj()) {
                    std::cout << display[typeid(*(f->cells[i][j])).hash_code()];
                } else{
                    std::cout << display[typeid(*(f->cells[i][j]->get_game_obj())).hash_code()];
                }
            }
            std::cout << "\n";
        }
    }
}
