//
// Created by marco on 10/04/2026.
//
#include "Objects/Node.h"
#include "Objects/Edge.h"
#include <cmath>
#include <string>

void Astar(Node* Start, Node* End, int h, Edge* edges)
{
    std::string totalPath;

}
float calculateHeuristic(const Node* Start, const Node* End)
{
    float distance=0;
    auto X= pow(Start->getPositionX() - End->getPositionX(),2);
    auto Y = pow(Start->getPositionY() - End->getPositionY(), 2);
    distance = sqrt(X + Y);
    return distance;
}