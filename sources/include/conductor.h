//
// Created by Kontin on 18/09/2023.
//

#ifndef ROGUELIKECUSTOMECS_CONDUCTOR_H
#define ROGUELIKECUSTOMECS_CONDUCTOR_H

#include <vector>
#include <any>

#include "../../extlib/uuid_v4/uuid_v4.h"

#include "systems/system.h"
#include "entity.h"

class Conductor {

public:
    Conductor();
    ~Conductor();

    void add_system(System* sys);
    void add_entity(const Entity& ent);
    void add_comp(Component* comp, const UUIDv4::UUID& uuid);
    void add_comp(Component* comp, const Entity& ent);


    UUIDv4::UUID get_uuid();

    void run_systems();

    std::vector<Entity> entities;
    std::vector<System*> systems;

    UUIDv4::UUIDGenerator<std::mt19937_64> uuid_generator;

};
#endif //ROGUELIKECUSTOMECS_CONDUCTOR_H
