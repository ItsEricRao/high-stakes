#pragma once
#include "api.h"
#include "robodash/api.h"
#include "lemlib/api.hpp"
extern pros::MotorGroup left_motors;
extern pros::MotorGroup right_motors;
extern pros::MotorGroup base;
extern pros::Motor intake;
extern pros::Motor track;
extern pros::Motor arm;
extern pros::Controller controller;
extern pros::ADIDigitalOut pneu;
extern pros::ADIDigitalOut pneu_intake;

extern lemlib::Chassis chassis;