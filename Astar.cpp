//
// Created by marco on 10/04/2026.
//
#include "Objects/Node.h"
#include "Objects/Edge.h"
#include "Objects/Map.h"
#include <cmath>
#include <stdexcept>
#include <string>
#include <iostream>
float calculateHeuristic(const Node* Start, const Node* End);
void Astar(Node* Start, Node* End, float h, const std::vector<Edge*>& edges)
{
    h=calculateHeuristic(Start, End);
    Node* actualNode=Start;
    Map map = Map(edges);
    std::vector<Node*> conectedNodes;
    //f(n)=g(n)+h(n)
    while (actualNode != End)
    {
       conectedNodes=map.connectedNodes(actualNode);
        if (conectedNodes.empty())
        {
            throw std::invalid_argument("No nodes connected");
        }
        float f;
        float comprobation;
        Node* nextNode;
        for (Node* node : conectedNodes)
        {
            comprobation=abs(actualNode->getPositionX()-node->getPositionX())+abs(actualNode->getPositionY()-node->getPositionY())+h;
            if (comprobation<f)
            {
                f=comprobation;
                nextNode=node;
            }

        }
        std::cout << nextNode->getId() << std::endl;
        if (nextNode->getId()==End->getId())
        {
            std::cout << "Nodo encontrado" << std::endl;
            exit(0);
        }
    }

}
float calculateHeuristic(const Node* Start, const Node* End)
{
    float distance=0;
    auto X= pow(Start->getPositionX() - End->getPositionX(),2);
    auto Y = pow(Start->getPositionY() - End->getPositionY(), 2);
    distance = sqrt(X + Y);
    return distance;
}