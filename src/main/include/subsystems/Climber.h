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
#include <ctre/Phoenix.h>
#include <rev/CANSparkMax.h>
#include "Constants.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 *
 *
 * @author ExampleAuthor
 */
class Climber: public frc2::SubsystemBase {
private:
    // It's desirable that everything possible is private except
    // for methods that implement subsystem capabilities
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    rev::CANSparkMax m_motor1{CANMotorIDs::kClimber1ID, rev::CANSparkMax::MotorType::kBrushed};
    ctre::phoenix::motorcontrol::can::WPI_VictorSPX m_motor2{CANMotorIDs::kClimber2ID};

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
Climber();

    void Periodic() override;
    void SimulationPeriodic() override;
    void RunMotor1(bool forward);
    void RunMotor2(bool forward);
    void StopMotor1();
    void StopMotor2();
    void Stop();

    static constexpr const double kClimberSpeed = 0.5;

};

