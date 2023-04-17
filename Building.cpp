//
// Created by cartofiprajiti on 13.04.2023.
//

#include <memory>
#include "Building.h"
#include "Room.h"
#include "Office.h"
#include "LivingRoom.h"
#include "Bedroom.h"
#include "Toilet.h"
#include "Kitchen.h"
using namespace std;

Building::Building(){
    nrrooms = 0;
    nrBuildings++;
};

Building::~Building() {}

void Building::readRoomOpt() {
    cout<<"Choose an option:\n"
          "1) Office\n"
          "2) Living Room\n"
          "3) Bedroom\n"
          "4) Toilet\n"
          "5) Kitchen\n";
}

void Building::read() {
    cout<<"Name: "; getline(cin, name);
    cout<<"Adress: "; getline(cin, adress);
    cout<<"Area in meters square: "; cin>>area;
    int nrfloors;
    cout<<"Number of floors: "; cin>>nrfloors;
    for(int i=0; i<nrfloors; i++){
        std::cout<<"\n";
        floors.emplace_back();
        int nr;
        cout<<"Number of rooms on the floor "<<i+1<<": "; cin>>nr;
        nrrooms += nr;
        for(int j=0; j<nr; j++) {
            cout<<"\nRoom "<<j+1<<":\n";
            int opt;
            readRoomOpt();
            cin>>opt;
            shared_ptr<Room> q;
            switch(opt) {
                case 1: {
                    q = make_shared<Office>();
                    break;
                }
                case 2: {
                    q = make_shared<LivingRoom>();
                    break;
                }
                case 3: {
                    q = make_shared<Bedroom>();
                    break;
                }
                case 4: {
                    q = make_shared<Toilet>();
                    break;
                }
                case 5: {
                    q = make_shared<Kitchen>();
                    break;
                }
                default:
                    throw NotAValidRoom();
            }
            q->setBuilding(this);
            floors[i].push_back(q);
            q->setRnumber(j+1);
            q->read();
        }
    }
    cout<<"\nNumber of parking lots: "; cin>>nrParkingLots;
    cin.get();
}

void Building::print(){
    cout<<"Name: "<<name<<"\n";
    cout<<"Area: "<<area<<"\n";
    cout<<"Adress: "<<adress<<"\n";
    cout<<"Number of rooms: "<<nrrooms<<"\n";
    cout<<"Number of parking lots: "<<nrParkingLots<<"\n\n";
    int i = 1;
    for(auto floor: floors) {
        cout<<"Floor "<<i++<<"\n\n";
        for (auto room: floor)
            room->print(), cout<<"\n";
    }
}

int Building::getNrBuildings() {
    return nrBuildings;
}

void Building::readBuildingOpt() {
    cout<<"Choose an option:\n"
          "1) House"
          "2) Institution"
          "3) Residence Hall";
}