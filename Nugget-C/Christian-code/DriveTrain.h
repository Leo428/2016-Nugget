// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveTrain: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<CANTalon> leftFrontDrive;
	std::shared_ptr<CANTalon> leftRearDrive;
	std::shared_ptr<CANTalon> leftTopDrive;
	std::shared_ptr<CANTalon> rightTopDrive;
	std::shared_ptr<CANTalon> rightFrontDrive;
	std::shared_ptr<CANTalon> rightRearDrive;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	DriveTrain();
	void InitDefaultCommand();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	void takeJoystickInputs(Joystick leftController, Joystick rightController)
	{
		LeftTopDrive.Set(LeftContorller.GetY());
		LeftFrontDrive.Set(-LeftController.GetY());
		LeftRearDrive.Set(-LeftController.GetY());
		RightTopDrive.Set(-RightController.GetY());
		RightFrontDrive.Set(RightController.GetY());
		RightRearDrive.Set(RightController.GetY());
	}
	};

#endif
