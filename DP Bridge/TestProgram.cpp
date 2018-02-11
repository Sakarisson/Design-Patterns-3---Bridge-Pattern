#include "TestProgram.h"

using std::cout;
using std::cin;
using std::endl;

TestProgram::TestProgram() {

}

TestProgram::~TestProgram() {
    delete vehicleAdapter;
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
        cout << "====================================================" << endl;
        createVehicle(vehicleChoice, powerSourceChoice);
        if (vehicleAdapter != nullptr) {
            vehicleAdapter->drive();
        }
        cout << "Do you want to run again (1)? ";
        int again;
        cin >> again;
        if (again != 1) {
            running = false;
            cout << "Bye" << endl;
        }
    }
}

void TestProgram::createVehicle(int& vehicleChoice, int& powerSourceChoice) {
    PowerSource* powerSourceAdapter;
    switch (powerSourceChoice) {
    case 1:
        powerSourceAdapter = new FuelCellAD();
        break;
    case 2:
        powerSourceAdapter = new GasTurbineAD();
        break;
    case 3:
        powerSourceAdapter = new V8ClassicAD();
        break;
    default: // Invalid choice, do nothing
        cout << "Invalid power source" << endl;
        return;
    }

    switch (vehicleChoice) {
    case 1:
        vehicleAdapter = new Submarine(powerSourceAdapter);
        break;
    case 2:
        vehicleAdapter = new SpaceTesla(powerSourceAdapter);
        break;
    case 3:
        vehicleAdapter = new Train(powerSourceAdapter);
        break;
    default: // Invalid vehicle choice, delete power source and return
        cout << "Invalid vehicle" << endl;
        delete powerSourceAdapter;
        return;
    }
}
