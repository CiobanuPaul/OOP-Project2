//
// Created by cartofiprajiti on 14.04.2023.
//

#include "ResidenceHall.h"
ResidenceHall::~ResidenceHall() = default;

void ResidenceHall::read(const std::shared_ptr<Building>& b) {
    Building::read(b);
    std::cout<<"The administrator's name: "; getline(std::cin, admin);;
    std::cout<<"Is it private or the state's?(1/0): "; std::cin>>isPrivate;
    std::cin.get();
    std::cout<<"\n";
}

void ResidenceHall::print() const{
    std::cout<<"RESIDENCE HALL:\n\n";
    Building::print();
    std::cout<<"The administrator's name: "; std::cout<<admin<<"\n";
    std::cout<<"Is it private or the state's?(1/0): "; std::cout<<isPrivate<<"\n\n";
}