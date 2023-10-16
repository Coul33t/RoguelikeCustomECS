#include <iostream>
#include <vector>
#include <any>

#include "include/entities/entity.h"
#include "include/engine.h"
#include "include/systems/system_move.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Engine engine;
    engine.init();
    engine.run();

    return 0;
}
