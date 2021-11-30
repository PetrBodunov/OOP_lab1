#include "Field_Builder.h"

Field_Builder::Field_Builder(int rows, int columns) : rows(rows), columns(columns) {}

Field Field_Builder::without_walls_build() {
    Field f(rows, columns);
    f.cells[0][0] = new Entrance();
    f.cells[rows - 1][columns - 1] = new Exit();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (f.cells[i][j] == nullptr)
                f.cells[i][j] = new Cell();
        }
    }
    return Field(std::move(f));
}

Field Field_Builder::closed_field_build() {
    Field f(rows, columns);
    f.cells[1][1] = new Entrance();
    f.cells[rows - 2][columns - 2] = new Exit();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (f.cells[i][j] == nullptr) {
                if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1)
                    f.cells[i][j] = new Wall();
                else
                    f.cells[i][j] = new Cell();
            }
        }
    }
    return std::move(f);
}

Field Field_Builder::line_build() {
    Field f(rows, columns);
    f.cells[0][0] = new Entrance();
    f.cells[rows - 1][columns - 1] = new Exit();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (!f.cells[i][j]) {
                if (i == 0)
                    f.cells[i][j] = new Wall();
                else
                    f.cells[i][j] = new Cell();
            }
        }
    }
    return std::move(f);
}

