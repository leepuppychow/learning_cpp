#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int data;
    Node* right = NULL;
    Node* left = NULL;

    Node(int _data) {
        data = _data;
    }
};


class Tree {
public:
    Node* root;
    string output;

    Tree(Node* _root) {
        root = _root;
    }

    void insert(int value) {
        _insertNode(value, root);
        cout << "Insert " << value << " successful" << endl;
    }

    void sort() {
        _sort(root);
        cout << output << endl;
    }

private:
    void _insertNode(int value, Node* current) {
        if (value < current->data) {
            if (!current->left) {
                current->left = new Node(value);
            } else {
                _insertNode(value, current->left);
            }
        } else {
            if (!current->right) {
                current->right = new Node(value);
            } else {
                _insertNode(value, current->right);
            }
        }
    };

    void _sort(Node* current) {
        if (current->left) {
            _sort(current->left);
        }
        output += to_string(current->data) + " ";
        if (current->right) {
            _sort(current->right);
        }
    }
};


int main() {
    Tree tr(new Node(50));

    tr.insert(25);
    tr.insert(75);
    tr.insert(30);
    tr.insert(20);
    tr.insert(101);
    tr.insert(19);

    cout << tr.root->data << endl;
    cout << tr.root->left->data << endl;
    cout << tr.root->right->data << endl;
    cout << tr.root->left->right->data << endl;
    cout << tr.root->left->left->data << endl;

    tr.sort();

    return 0;
}

