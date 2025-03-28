#ifndef TRIANGLESURFACE_H
#define TRIANGLESURFACE_H

#include <string>
#include "VisualObject.h"

//Defaults to a quad, but can read a mesh from file
class TriangleSurface : public VisualObject
{
public:
    TriangleSurface();
    TriangleSurface(float xPos_, float yPos_, float scale_);
    TriangleSurface(const std::string& filename);
};

#endif // TRIANGLESURFACE_H
