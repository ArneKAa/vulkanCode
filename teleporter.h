#ifndef TELEPORTER_H
#define TELEPORTER_H

#include "VisualObject.h"

class Teleporter : public VisualObject
{   
public:
    float xDestination, yDestination;
    float xCam, yCam, zCam;
    float x1Bounds, x2Bounds, y1Bounds, y2Bounds;


    Teleporter();
    Teleporter(float xPos_, float yPos_, float scale_, float xDestination_, float yDestination_, float xCam_, float yCam_, float zCam_,
               float x1Bounds_, float x2Bounds_, float y1Bounds_, float y2Bounds_);
    void update() override;
};

#endif // TELEPORTER_H
