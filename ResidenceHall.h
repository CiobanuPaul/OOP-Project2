//
// Created by cartofiprajiti on 14.04.2023.
//

#ifndef TEMA2_RESIDENCEHALL_H
#define TEMA2_RESIDENCEHALL_H
#include "Building.h"

class ResidenceHall : public Building{
    std::string admin;
    bool isPrivate;
public:
    ~ResidenceHall() override;
    void read() override;
    void print() override;
};


#endif //TEMA2_RESIDENCEHALL_H
