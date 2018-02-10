#include "Vehicle.h"

Vehicle::Vehicle() {

}


Vehicle::~Vehicle() {

}

std::string Vehicle::toString() {

}

std::string Vehicle::poweredBy() {

}

bool Vehicle::tryStart() {

}

bool Vehicle::stop() {

}

bool Vehicle::incPower(int p = 5) {

}

bool Vehicle::decPower(int p = 5) {

}

void Vehicle::setPowerSource(PowerSource* powerSource) {
    delete _powerSource;
    _powerSource = powerSource;
}


