#include "Auton.h"

Auton::Auton(Drive* drive, Shooter* shooter, Intake* intake, Tunnel* tunnel):
m_drive(drive), m_shooter(shooter), m_intake(intake), m_tunnel(tunnel) {
    frc::SmartDashboard::PutStringArray("Auto List", kAutoNames);
}

void Auton::Init() {
    m_drive->Init();
    m_shooter->Init();
    m_intake->Init();
    m_tunnel->Init();
    
    // Get selected Auton, with default if none selected
    m_autonSelectedString = frc::SmartDashboard::GetString("Auto Selector", "Idle");
    fmt::print("Auton selected: {}\n", m_autonSelectedString);

    m_autonSelectedNumber = 0;
    for (std::string option : kAutoNames) {
        if (m_autonSelectedString == option) {
            break;
        } else {
            m_autonSelectedNumber++;
        }
    }
    currentState = 0;
    stateStartTime = GetTime();
}

void Auton::Periodic() {
    m_drive->Periodic();
    m_shooter->Periodic();
    m_intake->Periodic();
    m_tunnel->Periodic();

    switch(m_autonSelectedNumber) {
        case 0: 
            Idle_Auton();
            break;
        case 1:
            Taxi_Auton();
            break;
        case 2:
            ShootAndTaxi_Auton();
            break;
        case 3:
            ShootTwo_Auton();
            break;
        default:
            m_autonSelectedNumber = 0;
            Idle_Auton();
            break;
    }
}

double Auton::GetTime() {
    return (double)m_timer.GetFPGATimestamp();
}

void Auton::GoToNextState() {
    stateStartTime = 0.0;
    currentState++;
}

void Auton::StopSubsystems(bool drive,  bool shooter, bool intake, bool wrist, bool tunnel) {
    if (drive) {
        m_drive->ArcadeDrive(0, 0);
    }
    if (shooter) {
        m_shooter->Stop();
    }
    if (intake) {
        m_intake->StopRoller();
    }
    if (wrist) {
        m_intake->StopWrist();
    }
    if (tunnel) {
        m_tunnel->Stop();
    }
}

void Auton::Idle_Auton() {
    StopSubsystems(true, true, true, true, true);
}

void Auton::Taxi_Auton() {
    switch(currentState) {
        case 0: // Drive backwards
            m_drive->ArcadeDrive(-0.5, 0);
            StopSubsystems(false, true, true, true, true);
            if (GetTime() - stateStartTime >= 5.0) {
                GoToNextState();
            }
            break;
        case 2: // Stop all motors
            StopSubsystems(true, true, true, true, true);
            break;
        default:
            StopSubsystems(true, true, true, true, true);
            break;
    }
}

void Auton::ShootAndTaxi_Auton() {
    switch(currentState) {
        case 0: // Drive backwards and run shooter
            m_shooter->Run();
            m_drive->ArcadeDrive(-0.5, 0);
            StopSubsystems(false, false, true, true, true);
            if (GetTime() - stateStartTime >= 3) {
                GoToNextState();
            }
            break;
        case 1: // Run tunnel and shooter
            m_shooter->Run();
            m_tunnel->Run();
            StopSubsystems(true, false, true, true, false);
            if (GetTime() - stateStartTime >= 5.0) {
                GoToNextState();
            }
            break;
        case 2: // Stop all motors
            StopSubsystems(true, true, true, true, true);
            break;
        default:
            StopSubsystems(true, true, true, true, true);
            break;
    }
}

void Auton::ShootTwo_Auton() {
    switch(currentState) {
        case 0: // Drive backwards and run shooter
            m_shooter->Run();
            m_drive->ArcadeDrive(-0.5, 0);
            StopSubsystems(false, false, true, true, true);
            if (GetTime() - stateStartTime >= 3) {
                GoToNextState();
            }
            break;
        case 1: // Run tunnel and shooter
            m_shooter->Run();
            m_tunnel->Run();
            StopSubsystems(true, false, true, true, false);
            if (GetTime() - stateStartTime >= 5.0) {
                GoToNextState();
            }
            break;
        case 2: // turn around?
            break;
        case 3: // Stop all motors
            StopSubsystems(true, true, true, true, true);
            break;
        default:
            StopSubsystems(true, true, true, true, true);
            break;
    }
}