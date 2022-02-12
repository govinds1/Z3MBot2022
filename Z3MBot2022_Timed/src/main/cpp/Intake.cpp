#include "Intake.h"

Intake::Intake() {
    //m_intake = new WPI_VictorSPX(CANMotorIDs::kIntakeRollerID);
    //m_wrist = new WPI_VictorSPX(CANMotorIDs::kIntakeWristID);
    //m_intake->SetInverted(true);
    //m_wrist->SetInverted(false);
    frc::SmartDashboard::PutString("Subsystems/Intake/State", "Idle");
    frc::SmartDashboard::PutString("Subsystems/Wrist/State", "Idle");
}

void Intake::Init() {
    frc::SmartDashboard::PutString("Subsystems/Intake/State", "Idle");
    frc::SmartDashboard::PutString("Subsystems/Wrist/State", "Idle");
}

void Intake::Periodic() {

}

void Intake::RunRoller() {
    frc::SmartDashboard::PutString("Subsystems/Intake/State", "Running");
    //m_intake->Set(MotorSpeeds::kIntakeSpeed);
}

void Intake::StopRoller() {
    frc::SmartDashboard::PutString("Subsystems/Intake/State", "Idle");
    //m_intake->Set(0.0);
}

void Intake::MoveWristDown() {
    frc::SmartDashboard::PutString("Subsystems/Wrist/State", "Lowering");
    // TODO: add check for limit switch
    //m_wrist->Set(MotorSpeeds::kWristSpeed);
}

void Intake::MoveWristUp() {
    frc::SmartDashboard::PutString("Subsystems/Wrist/State", "Raising");
    // TODO: add check for limit switch
    //m_wrist->Set(-MotorSpeeds::kWristSpeed);
}

void Intake::StopWrist() {
    frc::SmartDashboard::PutString("Subsystems/Wrist/State", "Idle");
    //m_wrist->Set(0.0);
}