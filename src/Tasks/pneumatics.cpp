#include <vex.h>

bool wings_status = false;

void toggle_wings() {
    wings_status = !wings_status;
}

int pneumatics_task() {
    while (1) {

        if(Controller1.ButtonX.PRESSED) {
            toggle_wings();
        }

        if(wings_status) {
            right_wing.open();
            left_wing.open();
        }
        else {
            right_wing.close();
            left_wing.close();
        }
        
    }

    return 10;
}