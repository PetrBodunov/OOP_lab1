#include "Backpack.h"

Backpack::Backpack(int capacity) : capacity(capacity){
    arr_items = new Items*[capacity];
    for (int i = 0; i < capacity; i++)
        arr_items[i] = nullptr;
}

void Backpack::append(Items* el) {
    for (int i = 0; i < capacity; i++){
        if (!arr_items[i])
            arr_items[i] = el;
    }
}