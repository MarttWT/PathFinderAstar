//
// Created by marco on 10/04/2026.
//

#include "Edge.h"
#include <cmath>
#include "../Astar.cpp"

Edge::Edge(Node* a, Node* b)
{
    nodeA = a;
    nodeB = b;
    distance = calculateHeuristic(a,b);

}
float Edge::getDistance() const
{
    return distance;
}
