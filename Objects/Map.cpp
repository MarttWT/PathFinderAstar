//
// Created by marco on 10/04/2026.
//

#include "Map.h"

#include <utility>


Map::Map()
{
    matriz={};
    nodes.clear();
}

void Map::initializeMap(const std::vector<Node*>& n, std::vector<std::vector<int>> m)
{
    nodes=n;
    matriz= std::move(m);

}

void Map::addNode(Node* n)
{
    nodes.push_back(n);
}

void Map::removeNode(const Node* n)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        if (nodes[i]->getId()==n->getId())
        {
            nodes.erase(nodes.begin()+i);
        }
    }
}

void Map::clearMap()
{
    matriz.clear();
    nodes.clear();
}

std::vector<Node*> Map::connectedNodes(const Node* node) const
{
    std::vector<Node*> result;
    for (int i=0; i<matriz.size(); i++)
    {
        if (i != node->getId())
        {
            if (matriz[node->getId()][i]==1)
            {
                result.push_back(getNode(i));
            }
        }
    }
    return result;
}

Node* Map::getNode(const int y) const
{
    Node* result = nullptr;
    for (const auto & node : nodes)
    {
        if (node->getId()==y)
        {
            result = node;
        }
    }
    return result;
}
