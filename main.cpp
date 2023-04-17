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
    vector<Building*> buildings;
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
                    buildings.push_back(new House());
                    break;
                }
                case 2: {
                    buildings.push_back(new Institution());
                    break;
                }
                case 3: {
                    buildings.push_back(new ResidenceHall());
                    break;
                }
                default:
                    throw NotAValidBuilding();
            }
            buildings[i]->read();
            cout << "\n";
        }
        catch (NotAValidRoom &e) {
            delete buildings.back();
            buildings.pop_back();
            i--;
            cout << e.what() << "\nTry again!\n";
        }
        catch(NotAValidBuilding &e){
            i--;
            cout << e.what() << "\nTry again!\n";
        }
    }

    for(auto it: buildings)
        it->print();
    return 0;
}
