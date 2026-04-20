//
// Created by marco on 10/04/2026.
//

#ifndef PATHFINDERASTAR_MAP_H
#define PATHFINDERASTAR_MAP_H
#include <vector>

#include "Edge.h"
#include "Node.h"


class Map
{
    std::vector<Edge*> edges;
    public:
    Map(const std::vector<Edge*>& es);
    std::vector<Node*> connectedNodes(Node* node);
    private:
    int InEdge(const Node* node, const Edge* edge);
};


#endif //PATHFINDERASTAR_MAP_H