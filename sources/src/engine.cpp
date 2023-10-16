//
// Created by couland-q on 19/09/23.
//

#include "../include/engine.h"

Engine::Engine() {
    this->subscribe_all_systems();
}

Engine::~Engine() {

}

void Engine::subscribe_system(System* sys) {
    conductor.add_system(sys);
}

void Engine::subscribe_all_systems() {
    System* sys_mov = new SystemMove();
    System* sys_input = new SystemInput();

    subscribe_system(sys_mov);
    subscribe_system(sys_input);
}

void Engine::init() {
    subscribe_all_systems();
    EntitiesFactory::createPlayer(conductor);
}

void Engine::run() {
    conductor.run_systems();
}