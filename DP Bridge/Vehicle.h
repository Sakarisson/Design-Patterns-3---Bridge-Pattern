#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

#include "PowerSource.h"

class Vehicle {
public:
    Vehicle();
    ~Vehicle();
    std::string toString();
    std::string poweredBy();
    bool tryStart();
    bool stop();
    bool incPower(int);
    bool decPower(int);
    virtual void drive() = 0;
    void setPowerSource(PowerSource*);
};

#endif // !VEHICLE_H
