//
// Created by cartofiprajiti on 13.04.2023.
//

#ifndef TEMA2_ROOM_H
#define TEMA2_ROOM_H
#include <iostream>
#include <memory>
#include "Building.h"

class Room{
protected:
    float area;
    int rnumber;
    int capacity; //maximum number of people inside at once
    std::weak_ptr<Building> building;

public:
    virtual void read() = 0;
    virtual void print() = 0;
    virtual ~Room() = 0;

    void setRnumber(int rnumber);

    void setBuilding(const std::weak_ptr<Building> &building);
};



#endif //TEMA2_ROOM_H
