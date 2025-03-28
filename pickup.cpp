#include "pickup.h"

pickUp::pickUp() {}

pickUp::pickUp(float xPos_, float yPos_, float scale_)
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

    oScale = scale_;
    scale(oScale);

    moveAccurate(xPos_, yPos_, 0);


    mColor = {1, 1, 0.1};

    setName("pick");
}

void pickUp::update()
{

}
