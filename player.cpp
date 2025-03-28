#include "player.h"

Player::Player()
{
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
}

Player::Player(float xPos_, float yPos_, float speed_, float scale_, float x1Bounds_, float x2Bounds_, float y1Bounds_, float y2Bounds_)
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
    speed = speed_;

    oScale = scale_;
    scale(oScale);

    moveAccurate(xPos_, yPos_, 0);

    playerBounds.values[0] = x1Bounds_;
    playerBounds.values[1] = x2Bounds_ - oScale;
    playerBounds.values[2] = y1Bounds_;
    playerBounds.values[3] = y2Bounds_ - oScale;

    setName("player");

    mColor = {1.0, 0.2745, 0.6353};

}

void Player::update()
{
    if(xPos < playerBounds.values[0])
    {
        moveAccurate(playerBounds.values[0] - xPos, 0, 0);
    }
    else if(xPos > playerBounds.values[1])
    {
        moveAccurate(playerBounds.values[1] - xPos, 0, 0);
    }
    if(yPos < playerBounds.values[2])
    {
        moveAccurate(0, playerBounds.values[2] - yPos, 0);
    }
    else if(yPos > playerBounds.values[3])
    {
        moveAccurate(0, playerBounds.values[3] - yPos, 0);
    }
}
