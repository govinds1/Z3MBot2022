#include "commands/AutoShoot.h"

AutoShoot::AutoShoot(Shooter* m_shooter, Tunnel* m_tunnel) :
m_shooter(m_shooter), m_tunnel(m_tunnel)
{

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(m_Subsystem);
    SetName("AutoShoot");
    AddRequirements({m_shooter, m_tunnel});
}

// Called just before this Command runs the first time
void AutoShoot::Initialize() {
    startTime = (double)m_timer.GetFPGATimestamp();
}

// Called repeatedly when this Command is scheduled to run
void AutoShoot::Execute() {
    if ((double)m_timer.GetFPGATimestamp() - startTime >= kTunnelDelay) {
        m_tunnel->Run();
    }
    m_shooter->Run();
}

// Make this return true when this Command no longer needs to run execute()
bool AutoShoot::IsFinished() {
    return ((double)m_timer.GetFPGATimestamp() - startTime >= kTotalShootTime);
}

// Called once after isFinished returns true
void AutoShoot::End(bool interrupted) {
    m_shooter->Stop();
    m_tunnel->Stop();
}

bool AutoShoot::RunsWhenDisabled() const {
    return false;
}