//
// Created by cartofiprajiti on 13.04.2023.
//

#include "Room.h"
using namespace std;

Room::~Room(){}

void Room::setRnumber(int rnumber) {
    Room::rnumber = rnumber;
}

void Room::read(){
    cout<<"Room area: "; cin>>area;
    cout<<"Maximum capacity: "; cin>>capacity;
    cin.get();
}

void Room::print() {
    cout<<"Room area: "; cout<<area<<"\n";
    cout<<"Maximum capacity: "; cout<<capacity<<"\n";
}

void Room::setBuilding(const weak_ptr<Building> &building) {
    Room::building = building;
}
