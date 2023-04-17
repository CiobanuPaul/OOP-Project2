//
// Created by cartofiprajiti on 14.04.2023.
//

#ifndef TEMA2_HOUSE_H
#define TEMA2_HOUSE_H
#include "Building.h"

class House : public Building{
    std::string owner;
public:
    void read() override;
    void print() override;
    ~House() override;
};


#endif //TEMA2_HOUSE_H
