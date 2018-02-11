#include "Submarine.h"

#include <iostream>

using std::cout;
using std::endl;

Submarine::Submarine(PowerSource* powerSource) {
    setPowerSource(powerSource);
    _name = "Submarine";
}

Submarine::~Submarine() {

}

void Submarine::drive() {
    cout <<
        "Submarine starting engines..." << endl;
    incPower(100);
    tryStart();
    cout << "Decreasing pressure..." << endl;
    decPower(20);
    cout << "Missing complete. Halting power" << endl;
    stop();
}

void Submarine::steerLeft(int degrees) {
    cout << "Submerging " << degrees << " meters" << endl;
}

void Submarine::steerRight(int degrees) {
    cout << "Surfacing " << degrees << " meters" << endl;
}
