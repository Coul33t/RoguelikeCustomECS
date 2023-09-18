//
// Created by Kontin on 18/09/2023.
//

#include "../include/conductor.h"

Conductor::Conductor() {

}

Conductor::~Conductor() {

}

UUIDv4::UUID Conductor::get_uuid() {
    return uuid_generator.getUUID();
}

void Conductor::add_entity(const Entity& ent) {
    this->entities.emplace_back(ent);
}

void Conductor::add_system(System* sys) {
    this->systems.emplace_back(sys);
}

void Conductor::add_comp(Component* comp, const UUIDv4::UUID& uuid) {
    for (auto& sys: systems) {
        if (sys->valid_comp_type == comp->comp_type) {
            sys->add_comp(comp, uuid);
            return;
        }
    }

    std::cout << "ERROR: can't add component to any system." << std::endl;
}

void Conductor::add_comp(Component* comp, const Entity& ent) {
    add_comp(comp, ent.uuid);
}

void Conductor::run_systems() {
    for (auto& system: this->systems) {
        system->run();
    }
}