#include "Intake.h"

Intake::Intake() {
    m_intake = new WPI_VictorSPX(CANMotorIDs::kIntakeRollerID);
    m_wrist = new WPI_VictorSPX(CANMotorIDs::kIntakeWristID);
}

void Intake::Init() {

}

void Intake::Periodic() {

}

void Intake::RunRoller() {
    m_intake->Set(MotorSpeeds::kIntakeSpeed);
}

void Intake::StopRoller() {
    m_intake->Set(0.0);
}

void Intake::MoveWristDown() {
    // TODO: add check for limit switch
    m_wrist->Set(MotorSpeeds::kWristSpeed);
}

void Intake::MoveWristUp() {
    // TODO: add check for limit switch
    m_wrist->Set(-MotorSpeeds::kWristSpeed);
}

void Intake::StopWrist() {
    m_wrist->Set(0.0);
}