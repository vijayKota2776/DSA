// WAP to insert a node in BST and perform In-order Traversal.
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class BST {
public:
    Node* insert(Node* root, int val) {
        if (root == nullptr) return new Node(val);
        if (val < root->data)
            root->left = insert(root->left, val);
        else
            root->right = insert(root->right, val);
        return root;
    }

    void inOrder(Node* root) {
        if (root == nullptr) return;
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
};

int main() {
    BST tree;
    Node* root = nullptr;
    root = tree.insert(root, 50);
    tree.insert(root, 30);
    tree.insert(root, 70);
    tree.insert(root, 20);
    tree.insert(root, 40);
    tree.insert(root, 60);
    tree.insert(root, 80);
    tree.inOrder(root);
    return 0;
}
