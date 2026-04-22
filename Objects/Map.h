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
    std::vector<std::vector<Node>> matriz(int filas, std::vector<Node>(columnas));
    public:
    Map(int filas, std::vector<Node> columnas);

};


#endif //PATHFINDERASTAR_MAP_H