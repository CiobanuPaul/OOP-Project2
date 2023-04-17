//
// Created by cartofiprajiti on 13.04.2023.
//

#include "LivingRoom.h"
using namespace std;

LivingRoom::~LivingRoom() {}

void LivingRoom::read() {
    Room::read();
    cout<<"Has table? (1/0): "; cin>>hasTable;
    cout<<"Has sofa? (1/0): "; cin>>hasSofa;
    cin.get();
}

void LivingRoom::print() {
    cout<<"Living room:\n";
    Room::print();
    cout<<"Has table? (1/0): "; cout<<hasTable<<"\n";
    cout<<"Has sofa? (1/0): "; cout<<hasSofa<<"\n";
}
