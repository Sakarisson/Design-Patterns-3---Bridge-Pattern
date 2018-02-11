#include "SpaceTesla.h"

#include <iostream>

using std::cout;
using std::endl;

SpaceTesla::SpaceTesla(PowerSource* powerSource) {
    setPowerSource(powerSource);
    _name = "Space Tesla";
}

SpaceTesla::~SpaceTesla() {
    delete _powerSource;
}

void SpaceTesla::drive() {
    cout <<
        "Space Tesla heating up engines." << endl;
    _powerSource->incPower(50);
    _powerSource->tryStart();
    cout <<
        "====================================================" << endl <<
        "Didn't know what time it was and the lights were low" << endl <<
        "I leaned back on my radio" << endl <<
        "Some cat was layin' down some get it on rock 'n' roll, he said" << endl <<
        "Then the loud sound did seem to fade" << endl <<
        "Came back like a slow voice on a wave of phase haze" << endl <<
        "That weren't no D.J. that was hazy cosmic jive" << endl <<
        "There's a starman waiting in the sky" << endl <<
        "He'd like to come and meet us" << endl <<
        "But he thinks he'd blow our minds" << endl <<
        "There's a starman waiting in the sky" << endl <<
        "He's told us not to blow it" << endl <<
        "Cause he knows it's all worthwhile" << endl <<
        "He told me :" << endl <<
        "Let the children lose it" << endl <<
        "Let the children use it" << endl <<
        "Let all the children boogie" << endl <<
        "I had to phone someone so I picked on you" << endl <<
        "Hey, that's far out so you heard him too" << endl <<
        "Switch on the TV we may pick him up on channel two" << endl <<
        "Look out your window I can see his light" << endl <<
        "If we can sparkle he may land tonight" << endl <<
        "Don't tell your poppa or he'll get us locked up in fright" << endl <<
        "There's a starman waiting in the sky" << endl <<
        "He'd like to come and meet us" << endl <<
        "But he thinks he'd blow our minds" << endl <<
        "There's a starman waiting in the sky" << endl <<
        "He's told us not to blow it" << endl <<
        "Cause he knows it's all worthwhile" << endl <<
        "He told me :" << endl <<
        "Let the children lose it" << endl <<
        "Let the children use it" << endl <<
        "Let all the children boogie" << endl <<
        "There's a starman waiting in the sky" << endl <<
        "He'd like to come and meet us" << endl <<
        "But he thinks he'd blow our minds" << endl <<
        "There's a starman waiting in the sky" << endl <<
        "He's told us not to blow it" << endl <<
        "Cause he knows it's all worthwhile" << endl <<
        "He told me :" << endl <<
        "Let the children lose it" << endl <<
        "Let the children use it" << endl <<
        "Let all the children boogie" << endl;
}

void SpaceTesla::steerLeft(int degrees) {
    cout << "Thrusting retrograde " << degrees << " degrees" << endl;
}

void SpaceTesla::steerRight(int degrees) {
    cout << "Thrusting prograde " << degrees << " degrees" << endl;
}
