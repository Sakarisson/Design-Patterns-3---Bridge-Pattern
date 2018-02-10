#ifndef TRAIN_H
#define TRAIN_H

#include "Vehicle.h"

class Train : public Vehicle {
public:
    Train(PowerSource*);
    ~Train();
    void drive() override;
    void steerLeft(int) override;
    void steerRight(int) override;
};

#endif // !TRAIN_H
