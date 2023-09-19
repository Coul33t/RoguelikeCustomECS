//
// Created by couland-q on 19/09/23.
//

#ifndef ROGUELIKECUSTOMECS_SYSTEM_INPUT_H
#define ROGUELIKECUSTOMECS_SYSTEM_INPUT_H

#include "system.h"
#include "../components.h"

class SystemInput: public System {
    SystemInput();
    ~SystemInput();

    void run();
};
#endif //ROGUELIKECUSTOMECS_SYSTEM_INPUT_H
