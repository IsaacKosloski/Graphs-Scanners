//
// Created by IsaacKosloski on 17/05/2024.
//

#ifndef GRAPHS_SCANNERS_NODE_H
#define GRAPHS_SCANNERS_NODE_H
#include <iostream>

class Node
{
public:
    int edgesN;
    int archsM;
    Node* next;

    Node();
    Node(int edges, int archs);

};


#endif //GRAPHS_SCANNERS_NODE_H
