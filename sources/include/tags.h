//
// Created by Kontin on 18/09/2023.
//

#ifndef ROGUELIKECUSTOMECS_TAGS_H
#define ROGUELIKECUSTOMECS_TAGS_H

#include <string>

struct Tag {
    std::string name = "DEFAULT_TAG";
};

struct PlayerTag: public Tag {
    PlayerTag() {
        name = "PLAYER";
    }
};
#endif //ROGUELIKECUSTOMECS_TAGS_H
