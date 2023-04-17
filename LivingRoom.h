//
// Created by cartofiprajiti on 13.04.2023.
//

#ifndef TEMA2_LIVINGROOM_H
#define TEMA2_LIVINGROOM_H
#include "Room.h"

class LivingRoom : public Room{
    bool hasTable;
    bool hasSofa;
public:
    ~LivingRoom() override;

    void read() override;

    void print() override;
};


#endif //TEMA2_LIVINGROOM_H
