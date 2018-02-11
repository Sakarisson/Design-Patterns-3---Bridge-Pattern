#include "Train.h"

#include <iostream>

using std::cout;
using std::endl;

Train::Train(PowerSource* powerSource) {
    setPowerSource(powerSource);
    _name = "Train";
}

Train::~Train() {
    delete _powerSource;
}

void Train::drive() {
    cout <<
        "Train starting engines..." << endl <<
        "Powered by " << _powerSource->type() << endl <<
        "Full speed ahead!" << endl;
    _powerSource->setPower(100);
    _powerSource->tryStart();
    cout << "Getting close to destination. Decreasing power..." << endl;
    _powerSource->decPower(50);
    cout << "Arrived at station. Stopping" << endl;
    _powerSource->stop();
}

void Train::steerLeft(int degrees) {
    cout << "This is a train. Why are you even trying to steer?" << endl;
}

void Train::steerRight(int degrees) {
    cout << "Sigh... this TRAIN can't steer. It follows a set track" << endl;
}
