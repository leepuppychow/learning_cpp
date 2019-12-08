#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* right = NULL;
    Node* left = NULL;

    Node(int data) {
        this->data = data;
    }
};


class Tree {
public:
    Node* root;
    string output;

    Tree(Node* root) {
        this->root = root;
    }

    void insert_all(vector<int> values) {
        for (auto value : values) {
            insert(value);
        }
    }

    void insert(int value) {
        _insert(value, this->root);
        cout << "Insert successful for: " << value << endl;
    }

    void sort() {
        _sort(this->root);
        cout << output << endl;
    }

private:
    void _insert(int value, Node* current) {
        if (value < current->data) {
            if (!current->left) {
                current->left = new Node(value);
            } else {
                _insert(value, current->left);
            }
        } else {
            if (!current->right) {
                current->right = new Node(value);
            } else {
                _insert(value, current->right);
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

