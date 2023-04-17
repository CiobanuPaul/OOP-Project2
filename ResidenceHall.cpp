//
// Created by cartofiprajiti on 14.04.2023.
//

#include "ResidenceHall.h"
ResidenceHall::~ResidenceHall() {}

void ResidenceHall::read() {
    Building::read();
    std::cout<<"The administrator's name: "; getline(std::cin, admin);;
    std::cout<<"Is it private or the state's?(1/0): "; std::cin>>isPrivate;
    std::cin.get();
    std::cout<<"\n";
}

void ResidenceHall::print(){
    std::cout<<"Residence hall:\n";
    Building::print();
    std::cout<<"The administrator's name: "; std::cout<<admin<<"\n";
    std::cout<<"Is it private or the state's?(1/0): "; std::cout<<isPrivate<<"\n\n";
}