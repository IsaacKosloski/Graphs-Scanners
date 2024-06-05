//
// Created by zaack on 17/05/2024.
//

#include "graph.h"
// Empty constructor
Graph::Graph()
{

}
// Standard constructor
Graph::Graph(int vertices, int edges)
{
    verticesNumber = vertices;
    edgesNumber    = edges;
    // Allocate memory for the adjacency list array
    adjacencyList = new Node*[verticesNumber];

    // Initialize each adjacency list to empty
    for (int i = 0; i < verticesNumber; i++)
        adjacencyList[i] = nullptr;
}

// Destructor to free allocated memory
Graph::~Graph()
{
    // Free memory for each adjacency list
    for (int i = 0; i < verticesNumber; i++)
    {
        while(adjacencyList[i])
        {
            Node* temporary = adjacencyList[i];
            adjacencyList[i] = adjacencyList[i]->next;
            delete temporary;
        }
    }
    // Free the adjacency list array itself
    delete[] adjacencyList;
}

// Add an edge between two nodes (undirected graph)
void
Graph::addEdge(int source, int destination)
{
    // Create a new node for the destination
    Node* newNode = new Node(destination);
}

