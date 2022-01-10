#include "commands/DriveDistance.h"

DriveDistance::DriveDistance(double dist, DriveBase* m_drivebase) :
    m_dist(dist),
m_drivebase(m_drivebase)
{

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(m_Subsystem);
    SetName("DriveDistance");
    AddRequirements({m_drivebase});

}

// Called just before this Command runs the first time
void DriveDistance::Initialize() {
    velocity = (m_dist < 0) ? -m_drivebase->kAutoDriveSpeed : m_drivebase->kAutoDriveSpeed;
    timer->Reset();
    timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void DriveDistance::Execute() {
    m_drivebase->ArcadeDriveFunc(velocity, 0.0);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveDistance::IsFinished() {
    return timer->HasPeriodPassed(units::second_t(m_dist/kTimeToTravel1Unit));
}

// Called once after isFinished returns true
void DriveDistance::End(bool interrupted) {
    timer->Stop();
    m_drivebase->ArcadeDriveFunc(0.0, 0.0);
}

bool DriveDistance::RunsWhenDisabled() const {
    return false;
}