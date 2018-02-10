#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

#include "PowerSourceAdapters.h"

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

    // Operations for steering
    virtual void steerLeft(int) = 0;
    virtual void steerRight(int) = 0;
protected:
    std::string _name;
private:
    PowerSource* _powerSource;
};

#endif // !VEHICLE_H
