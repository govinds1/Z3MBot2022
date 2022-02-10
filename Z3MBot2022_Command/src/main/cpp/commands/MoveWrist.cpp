#include "commands/MoveWrist.h"

MoveWrist::MoveWrist(bool m_up, Intake* m_intake) :
m_up(m_up), m_intake(m_intake)
{

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(m_Subsystem);
    SetName("MoveWrist");
    AddRequirements({m_intake});
}

// Called just before this Command runs the first time
void MoveWrist::Initialize() {
    
}

// Called repeatedly when this Command is scheduled to run
void MoveWrist::Execute() {
    if (m_up) {
        m_intake->MoveWristUp();
    } else {
        m_intake->MoveWristDown();
    }
}

// Make this return true when this Command no longer needs to run execute()
bool MoveWrist::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void MoveWrist::End(bool interrupted) {
    m_intake->StopWrist();
}

bool MoveWrist::RunsWhenDisabled() const {
    return false;
}