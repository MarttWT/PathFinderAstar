//
// Created by marco on 10/04/2026.
//

#include "Node.h"

Node::Node(int x, int y)
{
    id++;
    positionY=y;
    positionX=x;
}

Node::Node()
{
    positionX=0;
    positionY=0;
}

int Node::getId()
{
    return id;
}

int Node::getPositionX() const
{
    return positionX;
}

int Node::getPositionY() const
{
    return positionY;
}
