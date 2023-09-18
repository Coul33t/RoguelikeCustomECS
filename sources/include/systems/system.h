//
// Created by Kontin on 18/09/2023.
//

#ifndef ROGUELIKECUSTOMECS_SYSTEM_H
#define ROGUELIKECUSTOMECS_SYSTEM_H

#include <iostream>
#include <string>
#include <vector>

#include "../../../extlib/uuid_v4/uuid_v4.h"

#include "../components.h"
#include "../entity.h"


class System {
public:
    System();
    ~System();

    void add_comp(Component* comp, const UUIDv4::UUID& ent_uuid);
    void add_comp(Component* comp, const Entity& ent);

    void run();

    std::string name;
    std::vector<std::pair<UUIDv4::UUID, Component*>> components;
    ComponentType valid_comp_type;

};
#endif //ROGUELIKECUSTOMECS_SYSTEM_H
