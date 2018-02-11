#include "Train.h"

#include <iostream>

using std::cout;
using std::endl;

Train::Train(PowerSource* powerSource) {
    setPowerSource(powerSource);
    _name = "Train";
}

Train::~Train() {
    
}

void Train::drive() {
    cout <<
        "Train starting engines..." << endl <<
        "Full speed ahead!" << endl;
    incPower(100);
    tryStart();
    cout << "Getting close to destination. Decreasing power..." << endl;
    decPower(50);
    cout << "Arrived at station. Stopping" << endl;
    stop();
}

void Train::steerLeft(int degrees) {
    cout << "This is a train. Why are you even trying to steer?" << endl;
}

void Train::steerRight(int degrees) {
    cout << "Sigh... this TRAIN can't steer. It follows a set track" << endl;
}
