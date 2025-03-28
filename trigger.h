#ifndef TRIGGER_H
#define TRIGGER_H

class Trigger
{
public:
    float xPos,yPos;
    float oScale;

    Trigger();
    Trigger(float xPos_, float yPos_, float scale_);

    virtual void update();
};

#endif // TRIGGER_H
