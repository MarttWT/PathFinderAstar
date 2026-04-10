//
// Created by marco on 10/04/2026.
//

#ifndef PATHFINDERASTAR_EDGE_H
#define PATHFINDERASTAR_EDGE_H
#include "Node.h"


class Edge
{
    Node* nodeA = new Node();
    Node* nodeB = new Node();
    int distance;//((X2-X1)+(Y2-Y1))^1/2
    public:
    Edge(Node* a, Node* b);
    int getDistance();
};


#endif //PATHFINDERASTAR_EDGE_H