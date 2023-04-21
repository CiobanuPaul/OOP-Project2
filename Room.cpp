//
// Created by cartofiprajiti on 13.04.2023.
//

#include "Room.h"
using namespace std;

Room::~Room() = default;

void Room::setRnumber(int rnumber_) {
    rnumber = rnumber_;
}

void Room::read(){
    cout<<"Room area: "; cin>>area;
    cout<<"Maximum capacity: "; cin>>capacity;
    cin.get();
}

void Room::print() const{
    cout<<"Room area: "; cout<<area<<"\n";
    cout<<"Maximum capacity: "; cout<<capacity<<"\n";
}

void Room::setBuilding(const weak_ptr<Building> &building_) {
    building = building_;
}
