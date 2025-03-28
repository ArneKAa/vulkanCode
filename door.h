#ifndef DOOR_H
#define DOOR_H

#include "VisualObject.h"

class Door : public VisualObject
{
public:
    Door();
    Door(float xPos_, float yPos_, float scale_ = 1.0f);
    void update() override;
    bool Opening = false;
};

#endif // DOOR_H
