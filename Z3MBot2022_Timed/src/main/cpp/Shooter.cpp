#include "Shooter.h"

Shooter::Shooter() {
    m_shooter = new rev::CANSparkMax(CANMotorIDs::kShooterID, rev::CANSparkMax::MotorType::kBrushless);
    m_shooter->SetInverted(false);
}

void Shooter::Init() {

}

void Shooter::Periodic() {
    
}

void Shooter::Run() {
    m_shooter->Set(MotorSpeeds::kShooterSpeed);
}

void Shooter::Stop() {
    m_shooter->Set(0.0);
}