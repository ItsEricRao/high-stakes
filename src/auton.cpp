#include "main.h"
#include "func.h"
#include "io.h"
#include "auton.h"

void red_l() {
    chassis.setPose(0,0,0);
    chassis.moveToPose(0,0,35,1000);
    arm.set_zero_position(310);
    pros::delay(100);
    arm.move_absolute(1750,100);
    pros::delay(1000);
    base.move_relative(-2,200);
    pros::delay(400);
    arm.move_absolute(0,100);
    chassis.moveToPose(-24, -22, 90, 3200);
    while (chassis.isInMotion()) {
        pros::delay(10);
    }
    chassis.cancelMotion();
    base.move_relative(-1.5,200);
    pros::delay(400);
    auto_lock();
    chassis.setPose(0,0,0);
    auto_intake(false);
    chassis.moveToPose(20,-15,90,1000);
    chassis.moveToPose(60,-16,90,3200);
    chassis.moveToPose(30,0,20,2500);
    chassis.moveToPose(-30,0,-90,2000);
}

void blue_r() {
    chassis.setPose(0, 0, 0);
    chassis.moveToPose(0, 0, -35, 1000);
    arm.set_zero_position(310);
    pros::delay(100);
    arm.move_absolute(1750, 100);
    pros::delay(1000);
    base.move_relative(-2, 200);
    pros::delay(400);
    arm.move_absolute(0, 100);
    chassis.moveToPose(20, -10, 270, 3200);
    while (chassis.isInMotion()) {
        pros::delay(10);
    }
    chassis.cancelMotion();
    base.move_relative(-1.5, 200);
    pros::delay(400);
    
    auto_lock();
    chassis.setPose(0, 0, 0);
    auto_intake(false);
    chassis.moveToPose(-17,-15,0,1000);
    chassis.moveToPose(-17, -32, -90, 2000);
    chassis.moveToPose(-50, -32, -90, 2000);
    chassis.moveToPose(-30, 0, 20, 2500);
    chassis.moveToPose(-30, 0, 90, 2000);
    chassis.moveToPose(40, 0, 90, 3000);
}
