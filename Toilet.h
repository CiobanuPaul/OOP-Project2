//
// Created by cartofiprajiti on 13.04.2023.
//

#ifndef TEMA2_TOILET_H
#define TEMA2_TOILET_H
#include <iostream>
#include "Room.h"

class Toilet : public Room{
    bool hasWarmWater;
    bool hasShower;
    std::string state;  // poor/medium/good
public:
    ~Toilet() override;

    void read() override;

    void print() override;
};


#endif //TEMA2_TOILET_H
