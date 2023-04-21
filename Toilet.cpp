//
// Created by cartofiprajiti on 13.04.2023.
//

#include "Toilet.h"
using namespace std;
Toilet::~Toilet() = default;

void Toilet::read() {
    Room::read();
    cout<<"Has shower? (1/0): "; cin>>hasShower;
    cout<<"Has warm water? (1/0): "; cin>>hasWarmWater;
    cin.get();
}

void Toilet::print() const{
    cout<<"Toilet:\n";
    Room::print();
    cout<<"Has shower? (1/0): "; cout<<hasShower<<"\n";
    cout<<"Has warm water? (1/0): "; cout<<hasWarmWater<<"\n";
}
