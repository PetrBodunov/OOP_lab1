#include "Field.h"
#include "./cells/Cell.h"


void Field::copy_Field(const Field &other) {
    rows = other.rows;
    columns= other.columns;
    cells = new Abstract_cell**[rows];
    for (int i = 0; i < rows; i++){
        cells[i] = new Abstract_cell*[columns];
        for (int j = 0; j < columns; j++){
            cells[i][j] = other.cells[i][j]->copy();
        }
    }
}

void Field::clear_Field() {
    if (cells) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                delete cells[i][j];
            }
            delete[] cells[i];
        }
        delete[] cells;
    }
}

Field::Field(int rows, int columns): rows(rows), columns(columns){
    cells = new Abstract_cell**[rows];
    for (int i = 0; i < rows; i++){
        cells[i] = new Abstract_cell*[columns];
        for (int j = 0; j < columns; j++){
            cells[i][j] = nullptr;
        }
    }
}

Field::Field(const Field& other){
    copy_Field(other);
}

Field & Field::operator=(const Field &other) {
    if (this != &other){
        clear_Field();
        copy_Field(other);
    }
    return *this;
}

Field::Field(Field &&other) {
    std::swap(rows, other.rows);
    std::swap(columns, other.columns);
    std::swap(cells, other.cells);
}

Field & Field::operator=(Field &&other) {
    if (this != &other){
        std::swap(rows, other.rows);
        std::swap(columns, other.columns);
        std::swap(cells, other.cells);
    }
    return *this;
}

Abstract_cell& Field::get(int i, int j) {
    return *cells[i][j];
}

void Field::set_obj(std::vector<Game_obj *> obj) {
    for (auto i : obj){
        int x = rand() % (rows - 1);
        int y = rand() % (columns - 1);
        while (!(typeid(*(cells[y][x])) == typeid(Cell) && cells[y][x]->get_game_obj() == nullptr)) {
            x = rand() % (rows - 1);
            y = rand() % (columns - 1);
        }
        cells[y][x]->put_game_obj(i);
    }
}

Field::~Field() {
    clear_Field();
}

int Field::get_columns() {
    return columns;
}

int Field::get_rows() {
    return rows;
}
