#include "doortrigger.h"

DoorTrigger::DoorTrigger() {}

DoorTrigger::DoorTrigger(float xPos_, float yPos_, float scale_)
{
    xPos = xPos_;
    yPos = yPos_;
    oScale = scale_;
}

void DoorTrigger::update()
{
 //nothing in here, just wanted the trigger class to be polymorphic
}

