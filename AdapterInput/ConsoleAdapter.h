#ifndef OOP_GAME_CONSOLEADAPTER_H
#define OOP_GAME_CONSOLEADAPTER_H

#include "AdapterInput.h"
#include <map>

class ConsoleAdapter: public AdapterInput{
private:
    std::map<char, Action> consoleActions = {{'w', UP},
                                             {'d', RIGHT},
                                             {'s', DOWN},
                                             {'a', LEFT}};

public:
    Action getAction() override{
        char c;
        std::cin >> c;
        return consoleActions[c];
    }

};

#endif //OOP_GAME_CONSOLEADAPTER_H
