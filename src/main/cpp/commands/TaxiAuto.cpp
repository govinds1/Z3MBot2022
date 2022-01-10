#include "commands/TaxiAuto.h"

TaxiAuto::TaxiAuto(DriveBase* m_drivebase) {
    AddCommands(
        // Drive forwards
        DriveDistance(5, m_drivebase)
    );
}