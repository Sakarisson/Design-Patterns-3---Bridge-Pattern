#ifndef SUBMARINE_H
#define SUBMARINE_H

#include "Vehicle.h"

class Submarine : public Vehicle {
public:
    Submarine(PowerSource*);
    ~Submarine();
    void drive() override;
    void steerLeft(int) override;
    void steerRight(int) override;
};

#endif
