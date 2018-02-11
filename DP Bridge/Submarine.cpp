#include "Submarine.h"

#include <iostream>

using std::cout;
using std::endl;

Submarine::Submarine(PowerSource* powerSource) {
    setPowerSource(powerSource);
    _name = "Submarine";
}

Submarine::~Submarine() {
    delete _powerSource;
}

void Submarine::drive() {
    cout <<
        "Submarine starting engines..." << endl <<
        "Powered by " << _powerSource->type() << endl;
    _powerSource->setPower(100);
    _powerSource->tryStart();
    cout << "Decreasing pressure..." << endl;
    _powerSource->decPower(20);
    cout << "Missing complete. Halting power" << endl;
    _powerSource->stop();
}

void Submarine::steerLeft(int degrees) {
    cout << "Submerging " << degrees << " meters" << endl;
}

void Submarine::steerRight(int degrees) {
    cout << "Surfacing " << degrees << " meters" << endl;
}
