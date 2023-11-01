#include <vex.h>


int intakes_task() {
    if(Controller1.ButtonR1.pressing()) {
        intakes.spin(fwd, 200, rpm);
    }
    else if(Controller1.ButtonR2.pressing()) {
        intakes.spin(reverse, 200, rpm);
    }
    else {
        intakes.stop(brake);
    }

    return 10;
}