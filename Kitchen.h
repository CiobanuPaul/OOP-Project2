//
// Created by cartofiprajiti on 13.04.2023.
//

#ifndef TEMA2_KITCHEN_H
#define TEMA2_KITCHEN_H
#include "Room.h"

class Kitchen : public Room{
    bool hasTable;
    bool hasFridge;
    bool hasGasCooker;
    bool hasOven;
public:

    ~Kitchen() override;

    void read() override;

    void print() override;
};


#endif //TEMA2_KITCHEN_H
