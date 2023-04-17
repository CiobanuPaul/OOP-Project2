//
// Created by cartofiprajiti on 13.04.2023.
//

#ifndef TEMA2_BEDROOM_H
#define TEMA2_BEDROOM_H
#include "Room.h"

class Bedroom : public Room{
    int nrbeds;
    bool hasDesk;
public:
    ~Bedroom() override;

    void read() override;

    void print() override;
};


#endif //TEMA2_BEDROOM_H
