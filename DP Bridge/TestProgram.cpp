#include "TestProgram.h"

using std::cout;
using std::cin;
using std::endl;

TestProgram::TestProgram() {

}

TestProgram::~TestProgram() {

}

void TestProgram::start() {
    running = true;
    while (running) {
        delete vehicleAdapter;
        cout <<
            "Available vehicles:" << endl <<
            "1. Submarine" << endl <<
            "2. Space Tesla" << endl <<
            "3. Train" << endl <<
            "Please pick one: ";
        int vehicleChoice;
        cin >> vehicleChoice;
        cout <<
            "Available power sources:" << endl <<
            "1. Fuel Cell" << endl <<
            "2. Gas Turbine" << endl <<
            "3. V8 Classic" << endl <<
            "Please pick one: ";
        int powerSourceChoice;
        cin >> powerSourceChoice;
        running = false;
    }
}
