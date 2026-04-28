//
// Created by marco on 10/04/2026.
//
#include "Objects/Node.h"
#include "Objects/Edge.h"
#include "Objects/Map.h"
#include <cmath>
#include <iostream>
double calculateDistance(const Node* currentNode, const Node* End);

void Astar(const Node* Start, const Node* End, const Map* map)
{
    double heuristic = calculateDistance(Start, End);
    const Node* currentNode=Start;
    while (currentNode!=End)
    {
        double distance=0;
        double distanceMIN=0;
        const Node* nextNode;
        std::vector<Node*> options = map->connectedNodes(currentNode);
        distanceMIN = calculateDistance(currentNode, options[0]);
        for (int i=1;i<options.size();i++)
        {
            distance = calculateDistance(currentNode, options[i]);
            if (distance < distanceMIN)
            {
                distanceMIN = distance;
            }
        }
    }


}
double calculateDistance(const Node* currentNode, const Node* End)
{
    double distance=0;
    const auto X= pow(currentNode->getPositionX() - End->getPositionX(),2);
    const auto Y = pow(currentNode->getPositionY() - End->getPositionY(), 2);
    distance = sqrt(X + Y);
    return distance;
}
