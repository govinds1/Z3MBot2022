#include "Drive.h"

Drive::Drive() {
    m_frontRight = new WPI_VictorSPX(CANMotorIDs::kFrontRightID);
    m_backRight = new WPI_VictorSPX(CANMotorIDs::kBackRightID);
    m_frontLeft = new WPI_VictorSPX(CANMotorIDs::kFrontLeftID);
    m_backLeft = new WPI_VictorSPX(CANMotorIDs::kBackLeftID);

    m_backLeft->Follow(*m_frontLeft);
    m_backRight->Follow(*m_frontRight);

    m_frontLeft->SetInverted(false);
    m_backLeft->SetInverted(false);
    m_frontRight->SetInverted(false);
    m_backRight->SetInverted(false);

    m_drive = new frc::DifferentialDrive(*m_frontLeft, *m_frontRight);
}

void Drive::Init() {
    
}

void Drive::Periodic() {
    
}

void Drive::TankDrive(double left, double right) {
    m_drive->TankDrive(left, right);
}

void Drive::ArcadeDrive(double speed, double rot) {
    m_drive->ArcadeDrive(speed, rot);
}
