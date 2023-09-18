cmake_minimum_required(VERSION 3.22)
project(RoguelikeCustomECS)

set(CMAKE_CXX_STANDARD 20)

add_executable(RoguelikeCustomECS sources/main.cpp sources/include/components.h sources/include/entity.h sources/src/entity.cpp sources/include/conductor.h sources/src/conductor.cpp sources/include/systems/system.h sources/src/systems/system.cpp sources/include/tags.h)
