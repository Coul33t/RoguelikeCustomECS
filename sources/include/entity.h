//
// Created by Kontin on 18/09/2023.
//

#ifndef ROGUELIKECUSTOMECS_ENTITY_H
#define ROGUELIKECUSTOMECS_ENTITY_H

#include <vector>

#include "../../extlib/uuid_v4/uuid_v4.h"

#include "tags.h"


class Entity {
public:
    Entity();
    ~Entity();

    void add_tag(const Tag& tag);

    UUIDv4::UUID uuid;

    std::vector<Tag> tags;
};
#endif //ROGUELIKECUSTOMECS_ENTITY_H
