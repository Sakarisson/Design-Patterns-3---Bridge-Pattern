#ifndef SPACETESLA_H
#define SPACETESLA_H

#include "Vehicle.h"

class SpaceTesla : public Vehicle {
public:
    SpaceTesla(PowerSource*);
    ~SpaceTesla();
    void drive() override;
    void steerLeft(int) override;
    void steerRight(int) override;
};

#endif // !SPACETESLA_H
