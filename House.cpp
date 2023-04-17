//
// Created by cartofiprajiti on 14.04.2023.
//

#include "House.h"
House::~House() {}

void House::read() {
    Building::read();
    std::cout<<"House owner name: "; getline(std::cin, owner);;
    std::cout<<"\n";
}

void House::print() {
    std::cout<<"House:\n";
    Building::print();
    std::cout<<"House owner name: "; std::cout<<owner<<"\n\n";
}