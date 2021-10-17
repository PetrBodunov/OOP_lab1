#include <iostream>
#include "./field/Field_Builder.h"
#include "./views/Field_View.h"

int main(){
    Field f = Field_Builder(5,5).without_walls_build();
    Field_View view_f(&f);
    view_f.print_Field();
}