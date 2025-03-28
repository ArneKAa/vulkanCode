#ifndef DOORTRIGGER_H
#define DOORTRIGGER_H

#include "trigger.h"

class DoorTrigger : public Trigger
{
public:
    DoorTrigger();
    DoorTrigger(float xPos_, float yPos_, float scale_);
    void update() override;
};

#endif // DOORTRIGGER_H
