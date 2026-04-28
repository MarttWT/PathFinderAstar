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
    std::vector<std::vector<int>> matriz;
    std::vector<Node*> nodes;
    public:
    Map();
    std::vector<Node*> connectedNodes(const Node* node) const;
    void initializeMap(const std::vector<Node*>& n,std::vector<std::vector<int>> m);
    void addNode(Node* n);
    void removeNode(const Node* n);
    void clearMap();
    Node* getNode(int y) const;
};


#endif //PATHFINDERASTAR_MAP_H