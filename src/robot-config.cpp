#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1;

//Pneumatics
pneumatics PTO(Brain.ThreeWirePort.A);
pneumatics right_wing(Brain.ThreeWirePort.C);
pneumatics left_wing(Brain.ThreeWirePort.E);

//Motors
motor front_right(PORT1, ratio6_1, true);
motor front_left(PORT9, ratio6_1, false);
motor back_right(PORT3, ratio6_1, true);
motor back_left(PORT5, ratio6_1, false);

motor PTO_left(PORT20, ratio6_1, false);
motor PTO_right(PORT19, ratio6_1, true);

motor_group left_drive(front_left, back_left);
motor_group right_drive(front_right, back_right);

motor_group PTO_group(PTO_left, PTO_right);

motor intakes(PORT6, ratio36_1);

inertial Inertial(PORT7);

motor kicker(PORT14, ratio36_1);



// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}