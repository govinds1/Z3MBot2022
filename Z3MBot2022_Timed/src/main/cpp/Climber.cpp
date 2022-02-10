#include "Climber.h"

Climber::Climber() {
    m_winch = new WPI_VictorSPX(CANMotorIDs::kWinchID);
    m_telescope = new rev::CANSparkMax(CANMotorIDs::kTelescopeID, rev::CANSparkMaxLowLevel::MotorType::kBrushed);
    frc::SmartDashboard::PutString("Subsystems/Telescope/State", "Idle");
    frc::SmartDashboard::PutString("Subsystems/Winch/State", "Idle");
}

void Climber::Init() {
    frc::SmartDashboard::PutString("Subsystems/Telescope/State", "Idle");
    frc::SmartDashboard::PutString("Subsystems/Winch/State", "Idle");
}

void Climber::Periodic() {
    
}


void Climber::RaiseTelescope() {
    frc::SmartDashboard::PutString("Subsystems/Telescope/State", "Raising");
    m_telescope->Set(MotorSpeeds::kTelescopeSpeed);
}

void Climber::LowerTelescope() {
    frc::SmartDashboard::PutString("Subsystems/Telescope/State", "Lowering");
    m_telescope->Set(-MotorSpeeds::kTelescopeSpeed);
}

void Climber::StopTelescope() {
    frc::SmartDashboard::PutString("Subsystems/Telescope/State", "Idle");
    m_telescope->Set(0.0);
}

void Climber::RaiseWinch() {
    frc::SmartDashboard::PutString("Subsystems/Winch/State", "Raising");
    m_winch->Set(MotorSpeeds::kWinchSpeed);
}

void Climber::LowerWinch() {
    frc::SmartDashboard::PutString("Subsystems/Winch/State", "Lowering");
    m_winch->Set(-MotorSpeeds::kWinchSpeed);
}

void Climber::StopWinch() {
    frc::SmartDashboard::PutString("Subsystems/Winch/State", "Idle");
    m_winch->Set(0.0);
}