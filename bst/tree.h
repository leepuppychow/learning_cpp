#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <vector>
#include "node.h"
using namespace std;

class Tree {
public:
    Node* root;
    string output;
    Tree(Node* root);

    void insert_all(vector<int> values);
    void insert(int value);
    void sort();

private:
    void _insert(int value, Node* current);
    void _sort(Node* current);
};

#endif
