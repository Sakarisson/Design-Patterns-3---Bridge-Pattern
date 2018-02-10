#include "Submarine.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    Submarine sub(new GasTurbineAD());
    cout <<
        sub.poweredBy() << endl <<
        sub.toString() << endl <<
        sub.incPower(50) << endl <<
        sub.tryStart() << endl <<
        sub.stop() << endl <<
        sub.decPower(5) << endl;
    return 0;
}
