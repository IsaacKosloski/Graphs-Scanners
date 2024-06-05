//
// Created by IsaacKosloski on 17/05/2024.
//

#ifndef GRAPHS_SCANNERS_GRAPH_H
#define GRAPHS_SCANNERS_GRAPH_H
#include "node.h"

class Graph
{
public:
    int verticesNumber;
    int edgesNumber;
    Node** adjacencyList;

    Graph();
    Graph(int vertices, int edges);
    ~Graph();

    void addEdge(int source, int destination);
};


#endif //GRAPHS_SCANNERS_GRAPH_H
