#ifndef EDGE_H
#define EDGE_H

#include "node.h"

class Edge {
public:
    Node* node1;
    Node* node2;
    int distance;

    Edge();
};

#endif