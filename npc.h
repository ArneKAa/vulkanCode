#ifndef NPC_H
#define NPC_H
#include "VisualObject.h"
#include "vector.h"
class NPC : public VisualObject
{
private:
    float normalSpeed = 0.01;
    Vector movement = Vector(2);
    bool movingToB = true;

    bool reachedPoint();
public:
    Vector A = Vector(2);
    Vector B = Vector(2);
    float speed = 2;

    NPC();
    NPC(float xPos_, float yPos_, float AxPos_, float AyPos_, float BxPos_, float ByPos_, float speed_ = 1.0f, float scale_ = 1.0f);
    void update() override;
};

#endif // NPC_H
