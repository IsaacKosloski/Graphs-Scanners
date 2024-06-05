//
// Created by IsaacKosloski on 17/05/2024.
//

#include "node.h"

Node::Node()
{

}

Node::Node(int edges, int archs)
{
    edgesN = edges;
    archsM = archs;
    next   = nullptr;
}


