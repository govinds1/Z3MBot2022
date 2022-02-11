#include "Tunnel.h"

Tunnel::Tunnel() {
    m_tunnel = new WPI_VictorSPX(CANMotorIDs::kCargoTunnelID);
    frc::SmartDashboard::PutString("Subsystems/Tunnel/State", "Idle");
}

void Tunnel::Init() {
    frc::SmartDashboard::PutString("Subsystems/Tunnel/State", "Idle");
}

void Tunnel::Periodic() {
    
}

void Tunnel::Run() {
    frc::SmartDashboard::PutString("Subsystems/Tunnel/State", "Running Forward");
    m_tunnel->Set(MotorSpeeds::kTunnelSpeed);
}

void Tunnel::RunBackwards() {
    frc::SmartDashboard::PutString("Subsystems/Tunnel/State", "Running Forward");
    m_tunnel->Set(-MotorSpeeds::kTunnelSpeed);
}

void Tunnel::Stop() {
    frc::SmartDashboard::PutString("Subsystems/Tunnel/State", "Idle");
    m_tunnel->Set(0.0);
}