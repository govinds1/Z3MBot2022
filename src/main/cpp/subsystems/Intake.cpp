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
#include "subsystems/Intake.h"
#include <frc/smartdashboard/SmartDashboard.h>

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

Intake::Intake(){
    SetName("Intake");
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    SetSubsystem("Intake");

    AddChild("motor", &m_motor);
    m_motor.SetInverted(false);
    m_motor.ConfigPeakOutputForward(kIntakeSpeed);
    frc::SmartDashboard::PutBoolean("Subsystems/Intake/Running", false);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Intake::Periodic() {
    // Put code here to be run every loop

}

void Intake::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation

}

void Intake::Run() {
    m_motor.Set(kIntakeSpeed);
}

void Intake::Stop() {
    m_motor.Set(0.0);
}
