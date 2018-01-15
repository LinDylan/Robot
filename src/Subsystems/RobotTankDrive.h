#ifndef RobotTankDrive_H
#define RobotTankDrive_H

#include <Commands/Subsystem.h>
#include <ctre/phoenix/MotorControl/CAN/TalonSRX.h>
#include <DoubleSolenoid.h>
#include "OI.h"

class RobotTankDrive : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	frc::DoubleSolenoid* gearShift;
	ctre::phoenix::motorcontrol::can::TalonSRX* leftFront;
	ctre::phoenix::motorcontrol::can::TalonSRX* rightFront;
	ctre::phoenix::motorcontrol::can::TalonSRX* leftRear;
	ctre::phoenix::motorcontrol::can::TalonSRX* rightRear;
	OI* input;
public:
	RobotTankDrive();
	void InitDefaultCommand();
	void Itteration();
	void lowGear();
	void highGear();
};

#endif  // RobotTankDrive_H
