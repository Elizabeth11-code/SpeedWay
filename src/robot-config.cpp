#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

controller Controller1(primary);
inertial Sensor(PORT10);

motor Intake(PORT14,ratio6_1,true);
motor Intake2(PORT16,ratio6_1,false);



digital_out Piston1 = digital_out(Brain.ThreeWirePort.A);
digital_out Piston2 = digital_out(Brain.ThreeWirePort.B);
digital_out TM = digital_out(Brain.ThreeWirePort.C);



// motor R1(PORT4,ratio6_1,false);
// motor R2(PORT5,ratio6_1,false);
// motor R3(PORT6 ,ratio6_1,false);
// motor L1(PORT7,ratio6_1,true);
// motor L2(PORT8,ratio6_1,true);
// motor L3(PORT9,ratio6_1,true);

motor R1(PORT4,ratio6_1,true);
motor R2(PORT5,ratio6_1,false);
motor R3(PORT3,ratio6_1,false);
motor L1(PORT7,ratio6_1,true);
motor L2(PORT8,ratio6_1,true);
motor L3(PORT9,ratio6_1,false);


// motor L1(PORT7,ratio6_1,false);
// motor L2(PORT5,ratio6_1,true);
// motor L3(PORT3,ratio6_1,false);


//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) {
  // nothing to initialize
}