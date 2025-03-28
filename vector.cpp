#include "vector.h"
#include <math.h>

float Vector::magnitude()
{
    float magnitude = 0;
    for(int i = 0; i < dimensions; i++)
    {
        magnitude += values[i]*values[i];
    }
    if(magnitude < 0)
    {
        magnitude *= (-1);
    }

    return sqrt(magnitude);
}

void Vector::normalize()
{
    float tempMagnitude = magnitude();

    for(int i = 0; i < dimensions; i++)
    {
        values[i] /= tempMagnitude;
    }
}

Vector::Vector(int dimensions_)
{
    if(dimensions_ < 2)
        return;

    dimensions = dimensions_;

    for(int i = 0; i < dimensions; i++)
    {
        values.push_back(0);
    }
}


