#include <iostream>
#include <vector>
#include "tree.h"
using namespace std;

int main() {
    Tree tr(new Node(50));
    vector<int> values{25,75,30,20,101,19};
    tr.insert_all(values);

    cout << tr.root->data << endl;
    cout << tr.root->left->data << endl;
    cout << tr.root->right->data << endl;
    cout << tr.root->left->right->data << endl;
    cout << tr.root->left->left->data << endl;

    tr.sort();

    return 0;
}
