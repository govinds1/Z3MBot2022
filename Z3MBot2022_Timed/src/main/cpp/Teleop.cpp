#include "Teleop.h"

Teleop::Teleop(Drive* drive, Shooter* shooter, Intake* intake, Tunnel* tunnel, Climber* climber):
m_drive(drive), m_shooter(shooter), m_intake(intake), m_tunnel(tunnel), m_climber(climber) {
    m_controller1 = new frc::XboxController(0);
    m_controller2 = new frc::XboxController(1);
}

void Teleop::Init() {
    m_drive->Init();
    m_shooter->Init();
    m_intake->Init();
    m_tunnel->Init();
    m_climber->Init();
}

void Teleop::Periodic() {
    m_drive->Periodic();
    m_shooter->Periodic();
    m_intake->Periodic();
    m_tunnel->Periodic();
    m_climber->Periodic();

    // Drive
    m_drive->ArcadeDrive(m_controller1->GetLeftY(), m_controller1->GetRightX());
    // m_drive->TankDrive(m_controller->GetLeftY(), m_controller1->GetRightY());

    // Shooter
    if (m_controller2->GetXButton()) {
        m_shooter->Run();
    } else {
        m_shooter->Stop();
    }

    // Intake
    if (m_controller2->GetBButton()) {
        m_intake->RunRoller();
    } else {
        m_intake->StopRoller();
    }

    // Wrist
    if (m_controller2->GetRightBumper()) {
        m_intake->MoveWristDown();
    } else if (m_controller2->GetLeftBumper()) {
        m_intake->MoveWristUp();
    } else {
        m_intake->StopWrist();
    }

    // Tunnel
    if (m_controller2->GetAButton()) {
        m_tunnel->Run();
    } else {
        m_tunnel->Stop();
    }

    // Climber Telescope
    if (m_controller1->GetRightBumper()) {
        m_climber->RaiseTelescope();
    } else if (m_controller1->GetLeftBumper()) {
        m_climber->LowerTelescope();
    } else {
        m_climber->StopTelescope();
    }

    // Climber Winch
    if (m_controller1->GetRightTriggerAxis() >= 0.05) {
        m_climber->RaiseWinch();
    } else if (m_controller1->GetLeftTriggerAxis() >= 0.05) {
        m_climber->LowerWinch();
    } else {
        m_climber->StopWinch();
    }
}