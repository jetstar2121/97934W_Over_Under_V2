#include <vex.h>

int intakes_task() {
    while (1) {
        if (Controller1.ButtonR1.pressing()) {
            intakes.spin(fwd, 100, pct);
        } else if (Controller1.ButtonR2.pressing()) {
            intakes.spin(reverse, 100, pct);
        } else {
            intakes.stop(brake);
        }
    }
    return 10;
}