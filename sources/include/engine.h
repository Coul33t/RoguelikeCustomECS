//
// Created by couland-q on 19/09/23.
//

#ifndef ROGUELIKECUSTOMECS_ENGINE_H
#define ROGUELIKECUSTOMECS_ENGINE_H

#include "conductor.h"

class Engine {
public:
    Engine();
    ~Engine();

    void subscribe_systems();

    Conductor conductor;
};

#endif //ROGUELIKECUSTOMECS_ENGINE_H
