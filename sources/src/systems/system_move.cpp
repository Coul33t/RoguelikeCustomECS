//
// Created by couland-q on 16/10/23.
//

#include "../../include/systems/system_move.h"

SystemMove::SystemMove() {
    this->name = "Move System";
    this->valid_comp_type = ComponentType::COMP_MOVABLE;
}

SystemMove::~SystemMove() = default;

void SystemMove::run() {

}