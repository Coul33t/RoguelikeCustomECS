//
// Created by couland-q on 16/10/23.
//

#include "../../include/entities/entities_factory.h"

namespace EntitiesFactory {
    void createPlayer(Conductor& conductor) {
        Entity player;
        player.add_tag(PlayerTag());
        conductor.add_comp(new MovableComp(), player);
        conductor.add_entity(player);
    }
}