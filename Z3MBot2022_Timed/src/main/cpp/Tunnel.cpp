#include "Tunnel.h"

Tunnel::Tunnel() {
    m_tunnel = new WPI_VictorSPX(CANMotorIDs::kCargoTunnelID);
}

void Tunnel::Init() {

}

void Tunnel::Periodic() {
    
}

void Tunnel::Run() {
    m_tunnel->Set(MotorSpeeds::kTunnelSpeed);
}

void Tunnel::Stop() {
    m_tunnel->Set(0.0);
}