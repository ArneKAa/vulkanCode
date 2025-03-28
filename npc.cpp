#include "npc.h"

NPC::NPC() {
    collision = true;
    Vertex v1{0.0f,   0.0f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v2{1.0f,   0.0f,  0.0f,   0.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v3{0.0f,   1.0f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v4{1.0f,   1.0f,  0.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};


    //Pushing 1st triangle,
    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    //then the 2nd.
    mVertices.push_back(v3);
    mVertices.push_back(v2);
    mVertices.push_back(v4);

    xPos = 0;
    yPos = 0;
    zPos = 0;
    scale(0.25);
    moveAccurate(0, 0);

    A.values[0] = -1;
    A.values[1] = -1;
    B.values[0] = 1;
    B.values[1] = 1;

    movement.values[0] = B.values[0] - xPos;
    movement.values[1] = B.values[1] - yPos;
    movement.normalize();

    mColor = {0.9, 0.1, 0.1};
    setName("npc");
}

NPC::NPC(float xPos_, float yPos_, float AxPos_, float AyPos_, float BxPos_, float ByPos_, float speed_, float scale_)
{

    collision = true;
    Vertex v1{0.0f,   0.0f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v2{1.0f,   0.0f,  0.0f,   0.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v3{0.0f,   1.0f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v4{1.0f,   1.0f,  0.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v5{0.0f,   0.0f,  1.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v6{1.0f,   0.0f,  1.0f,   0.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v7{0.0f,   1.0f,  1.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v8{1.0f,   1.0f,  1.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};

    //Pushing 1st triangle,
    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    //then the 2nd.
    mVertices.push_back(v3);
    mVertices.push_back(v2);
    mVertices.push_back(v4);

    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v5);

    mVertices.push_back(v5);
    mVertices.push_back(v2);
    mVertices.push_back(v6);

    mVertices.push_back(v3);
    mVertices.push_back(v1);
    mVertices.push_back(v7);

    mVertices.push_back(v7);
    mVertices.push_back(v1);
    mVertices.push_back(v5);

    mVertices.push_back(v4);
    mVertices.push_back(v3);
    mVertices.push_back(v8);

    mVertices.push_back(v8);
    mVertices.push_back(v3);
    mVertices.push_back(v7);

    mVertices.push_back(v4);
    mVertices.push_back(v2);
    mVertices.push_back(v8);

    mVertices.push_back(v8);
    mVertices.push_back(v2);
    mVertices.push_back(v6);

    mVertices.push_back(v5);
    mVertices.push_back(v6);
    mVertices.push_back(v7);

    mVertices.push_back(v7);
    mVertices.push_back(v6);
    mVertices.push_back(v8);

    xPos = 0;
    yPos = 0;
    zPos = 0;
    scale(scale_);
    moveAccurate(xPos_, yPos_);

    A.values[0] = AxPos_;
    A.values[1] = AyPos_;
    B.values[0] = BxPos_;
    B.values[1] = ByPos_;

    mColor = {0.9, 0.1, 0.1};
    setName("npc");

    movement.values[0] = B.values[0] - xPos;
    movement.values[1] = B.values[1] - yPos;
    movement.normalize();
}

bool NPC::reachedPoint()
{
    bool X = false;
    bool Y = false;
    if(A.values[0] <= B.values[0])
        X = true;

    if(A.values[1] <= B.values[1])
        Y = true;

    if(movingToB && X && Y && xPos >= B.values[0] && yPos >= B.values[1])
        return true;
    if(movingToB && !X && Y && xPos <= B.values[0] && yPos >= B.values[1])
        return true;
    if(movingToB && !X && !Y && xPos <= B.values[0] && yPos <= B.values[1])
        return true;
    if(movingToB && X && !Y && xPos >= B.values[0] && yPos <= B.values[1])
        return true;
    if(!movingToB && X && Y && xPos <= A.values[0] && yPos <= A.values[1])
        return true;
    if(!movingToB && !X && Y && xPos >= A.values[0] && yPos <= A.values[1])
        return true;
    if(!movingToB && !X && !Y && xPos >= A.values[0] && yPos >= A.values[1])
        return true;
    if(!movingToB && X && !Y && xPos <= A.values[0] && yPos >= A.values[1])
        return true;

    return false;
}

void NPC::update()
{
    //make the npc move from point a to point b and back
    if(reachedPoint())
    {
        movingToB = !movingToB;
        if(movingToB)
        {
            movement.values[0] = B.values[0] - xPos;
            movement.values[1] = B.values[1] - yPos;
        }
        else
        {
            movement.values[0] = A.values[0] - xPos;
            movement.values[1] = A.values[1] - yPos;
        }
        movement.normalize();
    }
    moveAccurate(movement.values[0] * speed * normalSpeed, movement.values[1] * speed * normalSpeed, 0);
}
