#include "Climber.h"

Climber::Climber() {
    m_winch = new WPI_VictorSPX(CANMotorIDs::kWinchID);
    m_telescope = new rev::CANSparkMax(CANMotorIDs::kTelescopeID, rev::CANSparkMaxLowLevel::MotorType::kBrushed);
}

void Climber::Init() {

}

void Climber::Periodic() {
    
}

void Climber::LowerTelescope() {
    m_telescope->Set(-MotorSpeeds::kTelescopeSpeed);
}

void Climber::RaiseTelescope() {
    m_telescope->Set(MotorSpeeds::kTelescopeSpeed);
}

void Climber::StopTelescope() {
    m_telescope->Set(0.0);
}

void Climber::RaiseWinch() {
    m_winch->Set(MotorSpeeds::kWinchSpeed);
}

void Climber::LowerWinch() {
    m_winch->Set(-MotorSpeeds::kWinchSpeed);
}

void Climber::StopWinch() {
    m_winch->Set(0.0);
}