//
// Created by cartofiprajiti on 14.04.2023.
//

#ifndef TEMA2_HOUSE_H
#define TEMA2_HOUSE_H
#include "Building.h"
#include <random>
#include <ctime>
#include "Colors.h"

class House : public Building{
    std::string owner;
    Colors color;
public:
    void read() override;
    void print() override;
    ~House() override;
    void generateColour();

    Colors getColor() const;
};


#endif //TEMA2_HOUSE_H
