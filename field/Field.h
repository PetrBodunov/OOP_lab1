#ifndef OOP_GAME_FIELD_H
#define OOP_GAME_FIELD_H

#include <iostream>
#include "cells/Abstract_cell.h"

class Field{
private:
    int rows;
    int columns;
    Abstract_cell*** cells = nullptr;

    void copy_Field(const Field& other);

    void clear_Field();

public:
    Field(int rows, int columns);

    Field(const Field& other);

    Field &operator=(const Field& other);

    Field(Field&& other);

    Field& operator=(Field&& other);

    friend class Field_Builder;

    friend class Field_View;

    virtual ~Field();
};
#endif //OOP_GAME_FIELD_H
