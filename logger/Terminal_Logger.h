#ifndef OOP_GAME_TERMINAL_LOGGER_H
#define OOP_GAME_TERMINAL_LOGGER_H

#include "Logger.h"

class Terminal_Loger: Logger{
    void log() override{
        std::cout << pref << model->get_info() << suff;
    }
};

#endif //OOP_GAME_TERMINAL_LOGGER_H
