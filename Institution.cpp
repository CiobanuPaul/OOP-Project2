//
// Created by cartofiprajiti on 14.04.2023.
//

#include "Institution.h"

Institution::~Institution(){}

void Institution::read() {
    Building::read();
    std::cout<<"Director's name: "; getline(std::cin, director);;
    std::cout<<"\n";
}

void Institution::print() {
    std::cout<<"Institution:\n";
    Building::print();
    std::cout<<"Director's name: "; std::cout<<director<<"\n\n";
}