/* #include <vex.h>
using namespace vex;

motor null_motor(PORT21, ratio6_1);
pneumatics null_pneumatics(Brain.ThreeWirePort.A);

class Toggle {
public:
    bool status;
    motor toggled_motor;
    pneumatics toggled_pneumatics;


    Toggle(bool status, motor Motor) {
        this->status = status;
        this->toggled_motor = Motor;
        //this->toggled_pneumatics = null_pneumatics;
    }
 

    void toggle_status() {
        this->status = !this->status;
    }
    void toggle_status(bool stat) {
        this->status = stat;
    }

  









}; */