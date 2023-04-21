//
// Created by cartofiprajiti on 13.04.2023.
//

#ifndef TEMA2_OFFICE_H
#define TEMA2_OFFICE_H
#include "Room.h"
#include <iostream>

class Office : public Room{
    bool hasDesk;
    bool hasSilence;
public:
    ~Office() override;

    void read() override;

    void print() const override;
};


#endif //TEMA2_OFFICE_H
