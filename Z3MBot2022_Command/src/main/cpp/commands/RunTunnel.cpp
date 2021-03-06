#include "commands/RunTunnel.h"

RunTunnel::RunTunnel(bool halfSpeed, Tunnel* m_tunnel)
:m_tunnel(m_tunnel),
m_halfSpeed(halfSpeed) {

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(m_Subsystem);
    SetName("RunTunnel");
    AddRequirements({m_tunnel});

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

}

// Called just before this Command runs the first time
void RunTunnel::Initialize() {
    if (m_halfSpeed) {
        m_tunnel->RunHalfSpeed();
    } else {
        m_tunnel->Run();
    }
}

// Called repeatedly when this Command is scheduled to run
void RunTunnel::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool RunTunnel::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void RunTunnel::End(bool interrupted) {
    m_tunnel->Stop();
}

bool RunTunnel::RunsWhenDisabled() const {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DISABLED
    return false;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DISABLED
}
