#include "Shooter.h"

Shooter::Shooter() {
    m_shooter = new rev::CANSparkMax(CANMotorIDs::kShooterID, rev::CANSparkMax::MotorType::kBrushless);
    m_shooter->SetInverted(false);
    frc::SmartDashboard::PutString("Subsystems/Shooter/State", "Idle");
}

void Shooter::Init() {
    frc::SmartDashboard::PutString("Subsystems/Shooter/State", "Idle");
}

void Shooter::Periodic() {
    
}

void Shooter::Run() {
    frc::SmartDashboard::PutString("Subsystems/Shooter/State", "Running");
    m_shooter->Set(MotorSpeeds::kShooterSpeed);
}

void Shooter::Stop() {
    frc::SmartDashboard::PutString("Subsystems/Shooter/State", "Idle");
    m_shooter->Set(0.0);
}