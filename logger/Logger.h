#ifndef OOP_GAME_LOGGER_H
#define OOP_GAME_LOGGER_H

#include <string>
#include "../game_obj/Characters/Characters.h"

//template<class T>
class Logger{
private:
//    T* model;
//    Characters model;
    std::string pref;
    std::string suff;

public:
//    Logger(Characters model, std::string pref, std::string suff): model(model), pref(pref), suff(suff) {}

    virtual void log() = 0;
};

#endif //OOP_GAME_LOGGER_H
