//
// Created by cartofiprajiti on 13.04.2023.
//

#include "Office.h"
using namespace std;
Office::~Office() = default;

void Office::read() {
    Room::read();
    cout<<"Has desk? (1/0): "; cin>>hasDesk;
    cout<<"Is it in a silent place? (1/0): "; cin>>hasSilence;
    cin.get();
}

void Office::print() const{
    cout<<"Office:\n";
    Room::print();
    cout<<"Has desk?: "; cout<<hasDesk<<"\n";
    cout<<"Is it in a silent place?: "; cout<<hasSilence<<"\n";
}
