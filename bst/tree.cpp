#include <vector>
#include <string>
#include "tree.h"

Tree::Tree(Node* root) {
    this->root = root;
}

void Tree::insert_all(vector<int> values) {
    for (auto value : values) {
        insert(value);
    }
}

void Tree::insert(int value) {
    this->_insert(value, this->root);
    cout << "Insert successful for: " << value << endl;
}

void Tree::sort() {
    this->_sort(this->root);
    cout << this->output << endl;
}

void Tree::_insert(int value, Node* current) {
    if (value < current->data) {
        if (!current->left) {
            current->left = new Node(value);
        } else {
            this->_insert(value, current->left);
        }
    } else {
        if (!current->right) {
            current->right = new Node(value);
        } else {
            this->_insert(value, current->right);
        }
    }
};

void Tree::_sort(Node* current) {
    if (current->left) {
        this->_sort(current->left);
    }
    this->output += to_string(current->data) + " ";
    if (current->right) {
        this->_sort(current->right);
    }
}
