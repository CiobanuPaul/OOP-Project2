#include <iostream>
#include <vector>
#include "House.h"
#include "Building.h"
#include "Institution.h"
#include "ResidenceHall.h"
#include "NotAValidBuilding.h"

using namespace std;
int Building::nrBuildings = 0;
int main() {
    vector<shared_ptr<Building>> buildings;
    int n;
    cout<<"Insert the number of buildings you wish to register: ";
    cin>>n;
    for(int i=0; i<n; i++) {
        try {
            cout << "Building " << i + 1 << ":\n";
            Building::readBuildingOpt();
            int opt;
            cin >> opt;
            cin.get();
            switch (opt) {
                case 1: {
                    buildings.push_back(make_shared<House>());
                    break;
                }
                case 2: {
                    buildings.push_back(make_shared<Institution>());
                    break;
                }
                case 3: {
                    buildings.push_back(make_shared<ResidenceHall>());
                    break;
                }
                default:
                    throw NotAValidBuilding();
            }
            buildings[i]->read(buildings[i]); //because you cannot convert 'this' to a shared pointer too easily
            try { //checking if the building is a house. then it sets a random color
                auto& ref = dynamic_cast<House&>(*buildings[i]);
                ref.generateColour();
                cout << "The house's color will be: " << ref.getColor()<<"\n";
            }
            catch(bad_cast&){}
            cout << "\n";
        }
        catch (NotAValidRoom &e) {
            buildings.pop_back();
            i--;
            cout << e.what() << "\nTry again!\n";
        }
        catch(NotAValidBuilding &e){
            i--;
            cout << e.what() << "\nTry again!\n";
        }
    }

    cout<<"Type 'ok' to print all the buildings.\n";
    string s;
    cin>>s;
    cout<<"\nThe registered buildings: \n\n";
    for(const auto& it: buildings) {
        it->print();
        cout<<"Type 'ok' to continue\n";
        cin>>s;
        cout<<"\n\n";
    }    return 0;
}
