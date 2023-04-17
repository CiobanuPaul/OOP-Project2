//
// Created by cartofiprajiti on 13.04.2023.
//

#include "Bedroom.h"
using namespace std;

Bedroom::~Bedroom(){}

void Bedroom::read() {
    Room::read();
    cout<<"Number of beds: "; cin>>nrbeds;
    cout<<"Has desk? (1/0): "; cin>>hasDesk;
    cin.get();
}

void Bedroom::print() {
    cout<<"Bedroom:\n";
    Room::print();
    cout<<"Number of beds: "; cout<<nrbeds<<"\n";
    cout<<"Has desk? (1/0): "; cout<<hasDesk<<"\n";
}
