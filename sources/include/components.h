//
// Created by Kontin on 18/09/2023.
//

#ifndef ROGUELIKECUSTOMECS_COMPONENTS_H
#define ROGUELIKECUSTOMECS_COMPONENTS_H

enum ComponentType {NONE, PLAYER, MOVABLE};

struct Component {
    ComponentType comp_type;
};

struct PlayerComp: public Component {
    PlayerComp() {
        comp_type = ComponentType::PLAYER;
    }
};

struct MovableComp: public Component {
    MovableComp() {
        comp_type = ComponentType::MOVABLE;
    }
};

#endif //ROGUELIKECUSTOMECS_COMPONENTS_H
