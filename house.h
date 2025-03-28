#ifndef HOUSE_H
#define HOUSE_H
#include "VisualObject.h"

class House : public VisualObject
{
public:
    House();
    House(float xPos_, float yPos_, float scale_ = 1.0f);
    void update() override;
};

#endif // HOUSE_H
