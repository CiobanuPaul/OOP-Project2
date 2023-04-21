//
// Created by cartofiprajiti on 13.04.2023.
//

#ifndef TEMA2_BUILDING_H
#define TEMA2_BUILDING_H
#include "Room.h"
#include "NotAValidRoom.h"
#include <iostream>
#include <memory>
#include <vector>
class Building{
protected:
    std::string name;
    float area;
    std::string adress;
    int nrrooms;
    std::vector<std::vector<std::shared_ptr<Room>>> floors;
    int nrParkingLots;
    static int nrBuildings;
    virtual void readRoomOpt() const;
public:
    Building();
    virtual void read(const std::shared_ptr<Building>&) = 0;
    virtual void print() const = 0;
    virtual ~Building() = 0;
    static int getNrBuildings();
    static void readBuildingOpt();
};



#endif //TEMA2_BUILDING_H
