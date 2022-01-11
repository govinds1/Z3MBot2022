// RobotBuilder Version: 4.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: Subsystem.

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "subsystems/Shooter.h"
#include <frc/smartdashboard/SmartDashboard.h>

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

Shooter::Shooter(){
    SetName("Shooter");
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    SetSubsystem("Shooter");
    frc::SmartDashboard::PutBoolean("Subsystems/Shooter/Running", false);

 //AddChild("motor", &m_motor);
    m_motor.SetInverted(false);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Shooter::Periodic() {
    // Put code here to be run every loop
}

void Shooter::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation

}

void Shooter::Run() {
    frc::SmartDashboard::PutBoolean("Subsystems/Shooter/Running", true);
    m_motor.Set(kShootSpeed);
    // USE VELOCITY CONTROL - more accurate
}

void Shooter::Stop() {
    frc::SmartDashboard::PutBoolean("Subsystems/Shooter/Running", false);
    m_motor.Set(0.0);
}

bool Shooter::AtFullSpeed() {
    return true;
    // check encoder for velocity and make sure its what you want
}
