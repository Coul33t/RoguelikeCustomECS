//
// Created by couland-q on 19/09/23.
//

#include "../../include/systems/system_input.h"

SystemInput::SystemInput() {
    this->name = "Input System";
    this->valid_comp_type = ComponentType::COMP_NONE;
}

SystemInput::~SystemInput() = default;

void SystemInput::run() {

}