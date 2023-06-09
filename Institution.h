//
// Created by cartofiprajiti on 14.04.2023.
//

#ifndef TEMA2_INSTITUTION_H
#define TEMA2_INSTITUTION_H
#include "Building.h"

class Institution : public Building{
    std::string director;
public:
    ~Institution() override;
    void read(const std::shared_ptr<Building>&) override;
    void print() const override;
};


#endif //TEMA2_INSTITUTION_H
