#ifndef OOP_GAME_FILE_LOGGER_H
#define OOP_GAME_FILE_LOGGER_H

#include "Logger.h"
#include <fstream>

class File_Logger: public Logger{
    std::ofstream f;

public:
    File_Logger(std::string file_name): Logger() {
        f.open(file_name);
    }

    ~File_Logger() {
        f.close();
    }

    void log(std::string info) override{
        f << pref << info << suff << std::endl;
    }
};

#endif //OOP_GAME_FILE_LOGGER_H
