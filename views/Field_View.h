#ifndef OOP_GAME_FIELD_VIEW_H
#define OOP_GAME_FIELD_VIEW_H

#include "../field/cells/Cell.h"
#include "../field/cells/Entrance.h"
#include "../field/cells/Exit.h"
#include "../field/cells/Wall.h"
#include "../field/Field.h"

class Field_View{
private:
    Field* f = nullptr;

public:
    Field_View() = default;

    Field_View(Field* f);

    void print_Field();
};

#endif //OOP_GAME_FIELD_VIEW_H
