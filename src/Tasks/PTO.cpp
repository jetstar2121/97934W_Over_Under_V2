#include <vex.h>
using namespace vex;

bool PTO_status = false;

void toggle_PTO() {
    PTO_status = !PTO_status;
}

int PTO_task() {
    while (1) {
        if (Controller1.ButtonB.PRESSED) {
            toggle_PTO();
        }
        if (PTO_status) {
            PTO.open();
            if (Controller1.ButtonL2.pressing()) {
                PTO_group.spin(reverse, 200, rpm);
            } else if(Controller1.ButtonL1.pressing()) {
                PTO_group.spin(fwd, 200, rpm);
            }
            else {
                PTO_group.stop(hold);
            }

        } else {
            PTO.close();

            PTO_left.spin(fwd, -((Controller1.Axis3.value()) + Controller1.Axis4.value()), pct);
            PTO_right.spin(fwd, -((Controller1.Axis3.value()) - Controller1.Axis4.value()), pct);
        }
    }
    return 10;
}