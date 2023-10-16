//
// Created by couland-q on 16/10/23.
//

#ifndef ROGUELIKECUSTOMECS_SYSTEM_MOVE_H
#define ROGUELIKECUSTOMECS_SYSTEM_MOVE_H

#include "system.h"
#include "../components.h"

class SystemMove: public System {
public:
    SystemMove();
    ~SystemMove();

    void run();
};

#endif //ROGUELIKECUSTOMECS_SYSTEM_MOVE_H
