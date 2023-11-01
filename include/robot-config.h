using namespace vex;

extern brain Brain;

extern controller Controller1;

extern pneumatics left_wing, right_wing;
extern motor front_right, back_right, front_left, back_left;
extern motor_group left_drive, right_drive;
extern motor intakes;

extern motor kicker;
// VEXcode devices

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);