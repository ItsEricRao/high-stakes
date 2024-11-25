#include "main.h"
#include "func.h"
#include "io.h"
int pneu_stat = 0;

void manual_intake() {
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
        intake.move(-127);
        track.move(-127);
    }
    else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
        intake.move(127);
        track.move(127);
    }
    else {
        intake.brake();
        track.brake();
    }
}

void manual_hang() {
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1) && arm.get_position() < 1750) {
        arm.move_velocity(50);
    }
    else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2) && arm.get_position() > 0) {
        arm.move_velocity(-50);
    }
    else {
        arm.brake();
    }
}

void hang_macro() {
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_A)) {
        arm.move_absolute(400, 100);
        pros::delay(1000);
    }
}

void lock() {
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_RIGHT) && pneu_stat % 2 == 0) {
        pneu.set_value(true);
        pneu_stat++;
        pros::delay(350);
    }
    else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_RIGHT) && pneu_stat % 2 != 0){
        pneu.set_value(false);
        pneu_stat++;
        pros::delay(350);
    }
}