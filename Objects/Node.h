//
// Created by marco on 10/04/2026.
//

#ifndef PATHFINDERASTAR_NODE_H
#define PATHFINDERASTAR_NODE_H


class Node
{
    static int counter;
    int id;
    int positionX = 0;
    int positionY = 0;
    public:
        Node(int x, int y);
        Node();
    int getId() const;
    [[nodiscard]] int getPositionX() const;
    [[nodiscard]] int getPositionY() const;
};


#endif //PATHFINDERASTAR_NODE_H