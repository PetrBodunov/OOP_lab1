#ifndef OOP_GAME_LOGABLE_H
#define OOP_GAME_LOGABLE_H

#include <vector>
#include "Logger.h"

class Logable{
private:
    std::vector<Logger*> loggers;

public:
    void add_logger(Logger* logger){
        loggers.push_back(logger);
    }

    void notify(std::string info){
        for (auto& obs: loggers)
            *(obs) << (info);
    }

};
#endif //OOP_GAME_LOGABLE_H