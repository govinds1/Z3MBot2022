
#include "subsystems/Climber.h"
#include <frc/smartdashboard/SmartDashboard.h>


Climber::Climber(){
    SetName("Climber");
    SetSubsystem("Climber");

    AddChild("motor2", &m_motor2);
    m_motor2.SetInverted(false);

    //AddChild("motor1", &m_motor1);
    m_motor1.SetInverted(false);

    frc::SmartDashboard::PutBoolean("Subsystems/Climber/Motor1/Running", false);
    frc::SmartDashboard::PutBoolean("Subsystems/Climber/Motor2/Running", false);
}

void Climber::Periodic() {
    // Put code here to be run every loop

}

void Climber::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation

}

void Climber::Run() {
    RunMotor1();
    RunMotor2();
}

void Climber::RunMotor1() {
    frc::SmartDashboard::PutBoolean("Subsystems/Climber/Motor1/Running", true);
    m_motor1.Set(kClimberSpeed);
}

void Climber::RunMotor2() {
    frc::SmartDashboard::PutBoolean("Subsystems/Climber/Motor2/Running", true);
    m_motor2.Set(kClimberSpeed);
}

void Climber::Stop() {
    StopMotor1();
    StopMotor2();
}

void Climber::StopMotor1() {
    frc::SmartDashboard::PutBoolean("Subsystems/Climber/Motor1/Running", false);
    m_motor1.Set(0.0);
}

void Climber::StopMotor2() {
    frc::SmartDashboard::PutBoolean("Subsystems/Climber/Motor2/Running", false);
    m_motor2.Set(0.0);
}