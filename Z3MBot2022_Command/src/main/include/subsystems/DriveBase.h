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
#pragma once

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include <frc2/command/SubsystemBase.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <ctre/Phoenix.h>
#include <frc/ADXRS450_Gyro.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include "Constants.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveBase: public frc2::SubsystemBase {
private:
    // It's desirable that everything possible is private except
    // for methods that implement subsystem capabilities
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    ctre::phoenix::motorcontrol::can::WPI_VictorSPX m_frontRight{CANMotorIDs::kFrontRightID};
    ctre::phoenix::motorcontrol::can::WPI_VictorSPX m_backRight{CANMotorIDs::kBackRightID};
    ctre::phoenix::motorcontrol::can::WPI_VictorSPX m_frontLeft{CANMotorIDs::kFrontLeftID};
    ctre::phoenix::motorcontrol::can::WPI_VictorSPX m_backLeft{CANMotorIDs::kBackLeftID};
    frc::MotorControllerGroup m_right{m_backRight, m_frontRight  };
    frc::MotorControllerGroup m_left{m_backLeft, m_frontLeft  };
    frc::DifferentialDrive m_drive{m_left, m_right};


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
DriveBase();

    void Periodic() override;
    //void SimulationPeriodic() override;

    void ArcadeDriveFunc(double speed, double rot);
    void TankDriveFunc(double leftSpeed, double rightSpeed);
    double Deadzone(double val, double dzone);

    static constexpr const double kAutoDriveSpeed = 0.5;
    static constexpr const double kMaxDriveSpeed = 0.8;
};
