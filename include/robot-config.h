using namespace vex;

extern brain Brain;

extern controller Controller1;

extern inertial Sensor;

extern digital_out Piston1;
extern digital_out Piston2;
extern digital_out TM;

extern motor_group Intakes;
//------------------------
extern motor Intake;
extern motor Intake2;
//extern motor_group Intakes;
//------------------------
extern motor R1;
extern motor R2;
extern motor R3;
extern motor L1;
extern motor L2;
extern motor L3;
//------------------------

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:



void  vexcodeInit( void );