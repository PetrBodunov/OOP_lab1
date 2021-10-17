#include "Field_View.h"

Field_View::Field_View(Field *f) : f(f) {}

void Field_View::print_Field(){
    if (f) {
        for (int i = 0; i < f->rows; i++) {
            for (int j = 0; j < f->columns; j++) {
                if (typeid(*(f->cells[i][j])).hash_code() == typeid(Cell).hash_code())
                    std::cout << ".";
                if (typeid(*(f->cells[i][j])).hash_code() == typeid(Wall).hash_code())
                    std::cout << "*";
                if (typeid(*(f->cells[i][j])).hash_code() == typeid(Entrance).hash_code())
                    std::cout << "S";
                if (typeid(*(f->cells[i][j])).hash_code() == typeid(Exit).hash_code())
                    std::cout << "F";
                if (typeid(*(f->cells[i][j])).hash_code() == typeid(Abstract_cell).hash_code())
                    std::cout << "A";
            }
            std::cout << "\n";
        }
    }
}

