//
// Created by cartofiprajiti on 14.04.2023.
//

#include "Institution.h"

Institution::~Institution() = default;

void Institution::read(const std::shared_ptr<Building>& b) {
    Building::read(b);
    std::cout<<"Director's name: "; getline(std::cin, director);;
    std::cout<<"\n";
}

void Institution::print() const{
    std::cout<<"INSTITUTION:\n\n";
    Building::print();
    std::cout<<"Director's name: "; std::cout<<director<<"\n\n";
}