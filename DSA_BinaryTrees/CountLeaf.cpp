#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void inorder(Node* root, int &count) {
    if (root == nullptr) return;

    inorder(root->left, count);
    // Check if the current node is a leaf node
    if (root->left == nullptr && root->right == nullptr) {
        count++;
    }
    inorder(root->right, count);
}

int countleaf(Node* root) {
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}

Node* buildtree() {
    cout << "Enter root (-1 for no node): ";
    int data;
    cin >> data;
    if (data == -1) {
        return nullptr;
    }
    Node* root = new Node(data);
    cout << "Enter the left child of " << data << ": ";
    root->left = buildtree();
    cout << "Enter the right child of " << data << ": ";
    root->right = buildtree();
    return root;
}

int main() {
    Node* root = nullptr;
    root = buildtree();

    int leafCount = countleaf(root);
    cout << "Number of leaf nodes: " << leafCount << endl;

    return 0;
}
