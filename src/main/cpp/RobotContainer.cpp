// RobotBuilder Version: 4.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: RobotContainer.

#include "RobotContainer.h"
#include <frc2/command/ParallelRaceGroup.h>
#include <frc/smartdashboard/SmartDashboard.h>



RobotContainer* RobotContainer::m_robotContainer = NULL;

RobotContainer::RobotContainer() : m_autonomousCommand(
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
&m_driveBase){

    

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=SMARTDASHBOARD
    // Smartdashboard Subsystems


    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("Autonomous Command", new AutonomousCommand( &m_driveBase ));
    frc::SmartDashboard::PutData("ArcadeDrive: Halt", new ArcadeDrive(0, 0, &m_driveBase));
    frc::SmartDashboard::PutData("IntakeCargo", new IntakeCargo( &m_intake ));
    frc::SmartDashboard::PutData("Shoot", new Shoot( &m_shooter ));

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=SMARTDASHBOARD

    ConfigureButtonBindings();

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT-COMMANDS
    //m_driveBase.SetDefaultCommand(ArcadeDrive(-m_xboxController.GetLeftY(), m_xboxController.GetRightX(), &m_driveBase));
    m_driveBase.SetDefaultCommand(TankDrive(-m_xboxController.GetLeftY(), -m_xboxController.GetRightY(), &m_driveBase));

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT-COMMANDS

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS

    m_chooser.AddOption("Autonomous Command", new AutonomousCommand( &m_driveBase ));

    m_chooser.SetDefaultOption("Autonomous Command", new AutonomousCommand( &m_driveBase ));

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS

    frc::SmartDashboard::PutData("Auto Mode", &m_chooser);

}

RobotContainer* RobotContainer::GetInstance() {
    if (m_robotContainer == NULL) {
        m_robotContainer = new RobotContainer();
    }
    return(m_robotContainer);
}

void RobotContainer::ConfigureButtonBindings() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=BUTTONS

    frc2::JoystickButton m_intakeButton{&m_xboxController, ControllerConstants::kIntakeButton};
    frc2::JoystickButton m_shootButton{&m_xboxController, ControllerConstants::kShootButton};

    m_intakeButton.WhenHeld(IntakeCargo( &m_intake ), true);
    m_shootButton.WhenHeld(Shoot( &m_shooter ), true);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=BUTTONS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

frc::XboxController* RobotContainer::getxboxController() {
   return &m_xboxController;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS


frc2::Command* RobotContainer::GetAutonomousCommand() {
  // The selected command will be run in autonomous
  return m_chooser.GetSelected();
}