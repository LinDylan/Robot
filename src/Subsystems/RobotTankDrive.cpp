#include "RobotTankDrive.h"
#include "../RobotMap.h"

RobotTankDrive::RobotTankDrive() : frc::Subsystem("RobotTankDrive") {
	leftFront = new ctre::phoenix::motorcontrol::can::TalonSRX(talonLeftFront);
	rightFront = new ctre::phoenix::motorcontrol::can::TalonSRX(talonRightFront);
	leftRear = new ctre::phoenix::motorcontrol::can::TalonSRX(talonLeftRear);
	rightRear = new ctre::phoenix::motorcontrol::can::TalonSRX(talonLeftRear);
	gearShift = new frc::DoubleSolenoid(doubleSolenoidFwd, doubleSolenoidRev);
	input = new OI();
}

void RobotTankDrive::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void RobotTankDrive::Itteration() {
	//each itteration
}

void RobotTankDrive::lowGear() {

}

void RobotTankDrive::highGear() {

}
