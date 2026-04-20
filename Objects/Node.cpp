//
// Created by marco on 10/04/2026.
//

#include "Node.h"

Node::Node(int x, int y)
{
    counter++;
    id=counter;
    positionY=y;
    positionX=x;
}

Node::Node()
{
    Node(0,0);
}

int Node::getId() const
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
