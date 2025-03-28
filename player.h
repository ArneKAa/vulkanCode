#ifndef PLAYER_H
#define PLAYER_H

#include "VisualObject.h"
#include "vector.h"
class Player : public VisualObject
{    
public:
    Vector playerBounds = Vector(4);
    float normalSpeed = 0.01;
    float speed = 2;

    Player();
    Player(float xPos_, float yPos_, float speed_ = 1.0f, float scale_ = 1.0f, float x1Bounds_ = -1.5f, float x2Bounds_ = 1.5f, float y1Bounds_ = -1.5f, float y2Bounds_ = 1.5f);
    void update() override;
};

#endif // PLAYER_H
