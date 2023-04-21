//
// Created by cartofiprajiti on 14.04.2023.
//

#include "House.h"
House::~House() = default;

void House::read(const std::shared_ptr<Building>& b) {
    Building::read(b);
    std::cout<<"House owner name: "; getline(std::cin, owner);;
    std::cout<<"\n";
}

void House::print() const{
    std::cout<<"HOUSE:\n\n";
    Building::print();
    std::cout<<"House owner name: "; std::cout<<owner<<"\n\n";
    std::cout<<"House color: "; std::cout<<getColor()<<"\n\n";

}

void House::generateColour() {
    srand(time(nullptr));
    color = Colors(rand()%9);
}

const char* House::getColor() const {
    switch(color){
        case red: return "red";
        case green: return "green";
        case blue: return "blue";
        case yellow: return "yellow";
        case white: return "white";
        case brown: return "brown";
        case pink: return "pink";
        case orange: return "orange";
        case purple: return "purple";
    }
}
