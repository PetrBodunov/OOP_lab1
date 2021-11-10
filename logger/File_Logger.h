#ifndef OOP_GAME_FILE_LOGGER_H
#define OOP_GAME_FILE_LOGGER_H

#include "Logger.h"

class File_Logger: public Logger{
    std::string file_name;

public:
    File_Logger(std::string file_name): file_name(file_name), Logger() {

    }

    void log(std::string info) override{
        std::cout << pref << info << suff;
    }
};

#endif //OOP_GAME_FILE_LOGGER_H
