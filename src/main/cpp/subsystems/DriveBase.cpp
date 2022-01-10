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
#include "subsystems/DriveBase.h"
#include <frc/smartdashboard/SmartDashboard.h>

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

DriveBase::DriveBase(){
    SetName("DriveBase");
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    SetSubsystem("DriveBase");

    AddChild("Drive", &m_drive);
    m_drive.SetSafetyEnabled(true);
    m_drive.SetExpiration(0.1_s);
    m_drive.SetMaxOutput(kMaxDriveSpeed);


    AddChild("Right", &m_right);
    
    AddChild("frontRight", &m_frontRight);
    m_frontRight.SetInverted(false);

    AddChild("backRight", &m_backRight);
    m_backRight.SetInverted(false);

    AddChild("Left", &m_left);
    
    AddChild("frontLeft", &m_frontLeft);
    m_frontLeft.SetInverted(false);

    AddChild("backLeft", &m_backLeft);
    m_backLeft.SetInverted(true);

    m_backLeft.Follow(m_frontLeft);
    m_backRight.Follow(m_frontRight);

    m_backLeft.ConfigOpenloopRamp(0.3);
    m_frontLeft.ConfigOpenloopRamp(0.3);
    m_backRight.ConfigOpenloopRamp(0.3);
    m_frontRight.ConfigOpenloopRamp(0.3);

    m_backLeft.ConfigPeakOutputForward(kMaxDriveSpeed);
    m_frontLeft.ConfigPeakOutputForward(kMaxDriveSpeed);
    m_backRight.ConfigPeakOutputForward(kMaxDriveSpeed);
    m_frontRight.ConfigPeakOutputForward(kMaxDriveSpeed);

    m_backLeft.ConfigPeakOutputReverse(-kMaxDriveSpeed);
    m_frontLeft.ConfigPeakOutputReverse(-kMaxDriveSpeed);
    m_backRight.ConfigPeakOutputReverse(-kMaxDriveSpeed);
    m_frontRight.ConfigPeakOutputReverse(-kMaxDriveSpeed);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void DriveBase::Periodic() {
    // Put code here to be run every loop

}

void DriveBase::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation

}

void DriveBase::ArcadeDriveFunc(double speed, double rot) {
    m_drive.ArcadeDrive(speed, rot);

    // useless lol
    // general equation without limiting:
    // left = y + x
    // right = y - x
    // double leftSpeed = 0.0;
    // double rightSpeed = 0.0;
    // if (abs(speed) + abs(rot) < kMaxDriveSpeed) {
    //     leftSpeed = speed + rot;
    //     rightSpeed = speed - rot;
    // } else {
    //     if (speed + rot >= kMaxDriveSpeed) {
    //         leftSpeed = kMaxDriveSpeed;
    //         rightSpeed = speed - rot;
    //     } else if (speed - rot <= -kMaxDriveSpeed) {
    //         leftSpeed = speed + rot;
    //         rightSpeed = -kMaxDriveSpeed;
    //     }
    // }
    // m_frontLeft.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, leftSpeed);
    // m_frontRight.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, rightSpeed);
}

void DriveBase::TankDriveFunc(double leftSpeed, double rightSpeed) {
    m_drive.TankDrive(leftSpeed, rightSpeed);
    //m_frontLeft.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, leftSpeed);
    //m_frontRight.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, rightSpeed);
}