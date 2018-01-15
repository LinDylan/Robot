/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include <Joystick.h>
#define JOYSTICK_BUTTON_1 1
#define JOYSTICK_BUTTON_2 2
#define JOYSTICK_BUTTON_3 3
#define JOYSTICK_BUTTON_4 4
#define JOYSTICK_LEFT_SHOULDER 5
#define JOYSTICK_RIGHT_SHOULDER 6
#define JOYSTICK_LEFT_TRIGGER 7
#define JOYSTICK_RIGHT_TRIGGER 8
class OI {
public:
	OI();
	frc::Joystick* getJoystick();
private:
	frc::Joystick* controller;
};
