//
// Created by marco on 10/04/2026.
//

#include "Map.h"

Map::Map(const std::vector<Edge*>& es)
{
    edges = es;
}

std::vector<Node*> Map::connectedNodes(Node* node)
{
    std::vector<Node*> result;
    for (int i=0; i <= edges.size(); i++)
    {
        if (InEdge(node, edges[i])==0)
        {
            result.push_back(edges[i]->getNodeA());
        }
        else if (InEdge(node, edges[i])==1)
        {
            result.push_back(edges[i]->getNodeB());
        }
    }
    return result;
}

int Map::InEdge(const Node* node, const Edge* edge)
{
    if (node==edge->getNodeA())
    {
        return 0;
    }
    else if (edge->getNodeB()==node)
    {
        return 1;
    }
    return 2;
}


