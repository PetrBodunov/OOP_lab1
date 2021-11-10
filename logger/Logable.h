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

    void noify(){
        std::string info = get_info();
        for (auto& obs: loggers)
            obs->log(info);
    }

    virtual std::string get_info() = 0;

};
#endif //OOP_GAME_LOGABLE_H
