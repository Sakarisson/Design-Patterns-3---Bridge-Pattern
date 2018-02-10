#include "Vehicle.h"

Vehicle::Vehicle() {

}


Vehicle::~Vehicle() {

}

std::string Vehicle::toString() {
    return _name;
}

std::string Vehicle::poweredBy() {
    return _powerSource->type();
}

bool Vehicle::tryStart() {
    return _powerSource->tryStart();
}

bool Vehicle::stop() {
    if (_powerSource->isRunning()) {
        _powerSource->stop();
        return true;
    } else {
        return false;
    }
}

bool Vehicle::incPower(int p = 5) {
    return _powerSource->incPower(p);
}

bool Vehicle::decPower(int p = 5) {
    return _powerSource->decPower(p);
}

void Vehicle::setPowerSource(PowerSource* powerSource) {
    delete _powerSource;
    _powerSource = powerSource;
}


