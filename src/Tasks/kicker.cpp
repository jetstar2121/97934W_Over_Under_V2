#include <vex.h>

bool kicker_status = false;

void kicker_toggle() {
    kicker_status = !kicker_status;
}
void kicker_toggle(bool stat) {
    kicker_status = stat;
}

int kicker_task() {
    while (1) {
        if (Controller1.ButtonA.PRESSED) {
            kicker_toggle();
        }
        if (kicker_status) {
            kicker.spin(reverse, 100, rpm);
        } else {
            if (Controller1.ButtonRight.pressing()) {
                kicker.spin(reverse, 100, rpm);
            } else {
                kicker.stop(hold);
            }
        }
    }
    return 10;
}