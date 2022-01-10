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
    // Read current encoder value and set start
    //start = m_drivebase->GetPosition();
}

// Called repeatedly when this Command is scheduled to run
void DriveDistance::Execute() {
    m_drivebase->ArcadeDriveFunc(m_drivebase->kAutoDriveSpeed, 0.0);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveDistance::IsFinished() {
    return true;
    
    // check distance travelled
    if (abs(m_drivebase->GetPosition() - start) >= m_dist) {
        return true;
    }
    return false;
}

// Called once after isFinished returns true
void DriveDistance::End(bool interrupted) {
    m_drivebase->ArcadeDriveFunc(0.0, 0.0);
}

bool DriveDistance::RunsWhenDisabled() const {
    return false;
}