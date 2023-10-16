//
// Created by Kontin on 18/09/2023.
//

#ifndef ROGUELIKECUSTOMECS_COMPONENTS_H
#define ROGUELIKECUSTOMECS_COMPONENTS_H

enum ComponentType {COMP_NONE, COMP_PLAYER, COMP_MOVABLE};

struct Component {
    ComponentType comp_type;
};

struct MovableComp: public Component {
    MovableComp() {
        comp_type = ComponentType::COMP_MOVABLE;
    }
};

#endif //ROGUELIKECUSTOMECS_COMPONENTS_H
