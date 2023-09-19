cmake_minimum_required(VERSION 3.21)

SET(CMAKE_TOOLCHAIN_FILE
        "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
        CACHE STRING "Vcpkg toolchain file")

project(RoguelikeCustomECS)

set(CMAKE_CXX_STANDARD 20)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/include)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/extlib/blt)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/extlib/uuid_v4)

LINK_DIRECTORIES(${CMAKE_SOURCE_DIR}/extlib/blt)

FIND_PACKAGE(libtcod CONFIG REQUIRED)

INCLUDE_DIRECTORIES(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src
        ${PROJECT_SOURCE_DIR}/include/systems
        ${PROJECT_SOURCE_DIR}/src/systems
)

FILE(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/main.cpp"
        "${PROJECT_SOURCE_DIR}/include/*.hpp"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
)

add_executable(RoguelikeCustomECS ${all_SRCS})
TARGET_LINK_LIBRARIES(ProjectRLECS PRIVATE libtcod::libtcod BearLibTerminal)
