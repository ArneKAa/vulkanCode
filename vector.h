#ifndef VECTOR_H
#define VECTOR_H
#include <vector>

class Vector
{
public:
    std::vector<float> values;
    int dimensions;
    float magnitude();
    void normalize();
    Vector(int dimensions);
};

#endif // VECTOR_H
