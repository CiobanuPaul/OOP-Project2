//
// Created by cartofiprajiti on 13.04.2023.
//

#ifndef TEMA2_BUILDING_H
#define TEMA2_BUILDING_H
#include "Room.h"
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
public:
    Building();
    virtual void read() = 0;
    virtual void print() = 0;
    virtual void readOpt();
    virtual ~Building() = 0;
    static int getNrBuildings();
};



#endif //TEMA2_BUILDING_H
