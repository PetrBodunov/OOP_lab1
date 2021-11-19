#ifndef OOP_GAME_LOGGER_H
#define OOP_GAME_LOGGER_H

#include <string>

class Logger{
protected:
    std::string pref;
    std::string suff;

public:
    Logger(std::string pref = "", std::string suff = ""): pref(pref), suff(suff) {}

    Logger &operator<<(std::string info){
        log(info);
        return *this;
    }

    virtual void log(std::string info) = 0;
};

#endif //OOP_GAME_LOGGER_