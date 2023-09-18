#include <iostream>
#include <vector>
#include <any>

#include "include/entity.h"
#include "include/conductor.h"
#include "include/systems/system.h"

int main() {


    Conductor conductor;

    System* sys_mov = new System();
    System* sys2 = new System();

    conductor.add_system(sys_mov);
    conductor.add_system(sys2);

    Entity player;

    player.add_tag(PlayerTag());
    sys_mov->add_comp(new PlayerComp(), player);
    sys_mov->add_comp(new MovableComp(), player);

    conductor.run_systems();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
