//
// Created by cartofiprajiti on 13.04.2023.
//

#include "Kitchen.h"
using namespace std;
Kitchen::~Kitchen() = default;

void Kitchen::read() {
    Room::read();
    cout<<"Has table? (1/0): "; cin>>hasTable;
    cout<<"Has fridge? (1/0): "; cin>>hasFridge;
    cout<<"Has gas cooker? (1/0): "; cin>>hasGasCooker;
    cout<<"Has oven? (1/0): "; cin>>hasOven;
    cin.get();
}

void Kitchen::print() const{
    cout<<"Kitchen:\n";
    Room::print();
    cout<<"Has table? (1/0): "; cout<<hasTable<<"\n";
    cout<<"Has fridge? (1/0): "; cout<<hasFridge<<"\n";
    cout<<"Has gas cooker? (1/0): "; cout<<hasGasCooker<<"\n";
    cout<<"Has oven? (1/0): "; cout<<hasOven<<"\n";
}
