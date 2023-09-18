//
// Created by Kontin on 18/09/2023.
//

#include "../../include/systems/system.h"

System::System() {
    this->name = "DEFAULT";
    this->valid_comp_type = ComponentType::NONE;
}

System::~System() {

}

void System::add_comp(Component* comp, const UUIDv4::UUID& ent_uuid) {
    if (comp->comp_type == this->valid_comp_type) {
        this->components.emplace_back(ent_uuid, comp);
    }

    else {
        std::cout << "ERROR: comp type is not valid with system." << std::endl;
    }
}

void System::add_comp(Component* comp, const Entity& ent) {
    add_comp(comp, ent.uuid);
}

void System::run() {
    std::cout << "System " << this->name << " is running." << std::endl;
}