#pragma once
#include "JAR-Template/drive.h"

class Drive;

extern Drive chassis;

void default_constants();

void drive_test();
void turn_test();
void swing_test();
void full_test();
void odom_test();
void tank_odom_test();
void holonomic_odom_test();

//AUTONS
//WIP

//Skills
void Park();

//RED & BLUE RIGHT
void Auton_RBRT();
void Auton_5();
void AutonDE();

//RED & BLUE LEFT
void Auton_RBLT();

void Testing();
