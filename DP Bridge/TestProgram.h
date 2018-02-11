#ifndef TESTPROGRAM_H
#define TESTPROGRAM_H

#include "SpaceTesla.h"
#include "Submarine.h"
#include "Train.h"

#include <iostream>

class TestProgram {
public:
    TestProgram();
    ~TestProgram();
    void start();
private:
    bool running;
    Vehicle* vehicleAdapter;

    void createVehicle(int&, int&);
};

#endif // !TESTPROGRAM_H
