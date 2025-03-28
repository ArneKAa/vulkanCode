#ifndef PICKUP_H
#define PICKUP_H

#include "VisualObject.h"

class pickUp : public VisualObject
{
public:
    pickUp();
    pickUp(float xPos_, float yPos_, float scale_);
    void update() override;
};

#endif // PICKUP_H
