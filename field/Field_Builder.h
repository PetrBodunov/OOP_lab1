#ifndef OOP_GAME_FIELD_BUILDER_H
#define OOP_GAME_FIELD_BUILDER_H

#include "cells/Cell.h"
#include "cells/Entrance.h"
#include "cells/Exit.h"
#include "cells/Wall.h"
#include "Field.h"

class Field_Builder{
private:
    int rows;
    int columns;
public:

    Field_Builder() = delete;

    Field_Builder(int rows, int columns);

    Field without_walls_build();

    Field closed_field_build();

    Field line_build();
};

#endif //OOP_GAME_FIELD_BUILDER_H
