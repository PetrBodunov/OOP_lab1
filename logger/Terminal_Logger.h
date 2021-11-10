#ifndef OOP_GAME_TERMINAL_LOGGER_H
#define OOP_GAME_TERMINAL_LOGGER_H

#include "Logger.h"

class Terminal_Logger: public Logger{
public:
    Terminal_Logger(): Logger() {}

    void log(std::string info) override{
        std::cout << pref << info << suff;
    }
};

#endif //OOP_GAME_TERMINAL_LOGGER_H
