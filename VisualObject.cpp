#include "VisualObject.h"

VisualObject::VisualObject()
{
    mMatrix.setToIdentity();
}

void VisualObject::move(float x, float y, float z)
{
    mMatrix.translate(x, y, z);
    xPos += x*oScale;
    yPos += y*oScale;
    zPos += z*oScale;
}

void VisualObject::moveAccurate(float x, float y, float z)
{
    mMatrix.translate(x / oScale, y / oScale, z / oScale);
    xPos += x;
    yPos += y;
    zPos += z;
}

void VisualObject::scale(float s)
{
    mMatrix.scale(s);
    oScale = s;
}


void VisualObject::rotate(float t, float x, float y, float z)
{
    mMatrix.rotate(t, x, y, z);
}

void VisualObject::update()
{
    //do updates
}

void VisualObject::setName(std::string name)
{
    mName = name;
}

std::string VisualObject::getName() const
{
    return mName;
}
