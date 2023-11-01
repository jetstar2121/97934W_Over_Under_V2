#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1;

//Pneumatics
pneumatics left_wing(Brain.ThreeWirePort.A);
pneumatics right_wing(Brain.ThreeWirePort.B);

//Motors
motor front_right(PORT1, ratio6_1);
motor front_left(PORT2, ratio6_1);
motor back_right(PORT3, ratio6_1);
motor back_left(PORT4, ratio6_1);

motor_group left_drive(front_left, back_left);
motor_group right_drive(front_right, back_right);

motor intakes(PORT10, ratio6_1);

inertial Inertial(PORT7);



// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}