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
    std::vector<Node> nodes;
    std::vector<Edge> edges;
    public:
    Map(std::vector<Node> ns, std::vector<Edge> es);
    std::vector<Node> conectedNodes(Node node);



};


#endif //PATHFINDERASTAR_MAP_H