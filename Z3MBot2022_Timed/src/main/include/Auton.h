#pragma once

#include <string>
#include <vector>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/Timer.h>

#include "Drive.h"
#include "Shooter.h"
#include "Intake.h"
#include "Tunnel.h"
#include "Constants.h"

class Auton {
    Drive* m_drive;
    Shooter* m_shooter;
    Intake* m_intake;
    Tunnel* m_tunnel;

    // Auton Routine Functions
    void Idle_Auton();
    void Taxi_Auton();
    void ShootAndTaxi_Auton();
    void ShootTwo_Auton();
    void TestDistance_Auton();
    void TestAngle_Auton();

    public:
    Auton(Drive* drive, Shooter* shooter, Intake* intake, Tunnel* tunnel);
    void Init();
    void Periodic();

    double GetTime();
    void GoToNextState();
    void StopSubsystems(bool drive,  bool shooter, bool intake, bool wrist, bool tunnel);
    bool TurnAngle(double deg);
    bool DriveDistance(double dist);
    
    std::string m_autonSelectedString;
    int m_autonSelectedNumber;
    int currentState;
    double stateStartTime;
    double driveSpeed;
    double turnSpeed;
    frc::Timer m_timer;

    // Update this vector when you add more routines
    const std::vector<std::string> kAutoNames{"Idle", "Taxi", "Shoot And Taxi", "Shoot Two", "Test Distance", "Test Angle"};

    // CHANGE THESE WITH TESTING
    const double kTimeToRotateHalf = 0.5;
    const double kTimeToDrive1Foot = 0.5;
};