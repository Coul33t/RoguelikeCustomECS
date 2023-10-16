//
// Created by Kontin on 18/09/2023.
//

#include "../include/entity.h"

Entity::Entity() {

}

Entity::~Entity() {

}

void Entity::add_tag(const Tag &tag) {
    this->tags.emplace_back(tag);
}