//
// Created by couland-q on 19/09/23.
//

#ifndef ROGUELIKECUSTOMECS_ENGINE_H
#define ROGUELIKECUSTOMECS_ENGINE_H

#include "conductor.h"

#include "systems/system_input.h"
#include "systems/system_move.h"

#include "entities/entities_factory.h"

class Engine {
public:
    Engine();
    ~Engine();

    void subscribe_system(System* sys);
    void subscribe_all_systems();

    void init();

    void run();

    Conductor conductor;
};

#endif //ROGUELIKECUSTOMECS_ENGINE_H
