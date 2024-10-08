#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to count the number of nodes in the binary tree
int countnodes(struct node* root) {
    if (root == nullptr) {
        return 0;
    }

    int ans = 1 + countnodes(root->left) + countnodes(root->right);
    return ans;
}

// Function to check if the binary tree is a complete binary tree (CBT)
bool iscbt(struct node* root, int index, int cnt) {
    if (root == nullptr) {
        return true;
    }
    if (index >= cnt) {
        return false;
    } else {
        bool left = iscbt(root->left, 2 * index + 1, cnt);
        bool right = iscbt(root->right, 2 * index + 2, cnt);
        return (left && right);
    }
}

// Function to check if the binary tree follows the Max-Heap property
bool ismaxorder(struct node* root) {
    // If the node is a leaf node, it's a max-heap
    if (root->left == nullptr && root->right == nullptr) {
        return true;
    }

    // If the node has only a left child
    if (root->right == nullptr) {
        return (root->data >= root->left->data) && ismaxorder(root->left);
    } else {
        // If the node has both left and right children
        bool left = (root->data >= root->left->data) && ismaxorder(root->left);
        bool right = (root->data >= root->right->data) && ismaxorder(root->right);
        return left && right;
    }
}

// Function to check if the binary tree is a heap
bool isheap(struct node* root) {
    int index = 0;
    int totalcount = countnodes(root);

    if (iscbt(root, index, totalcount) && ismaxorder(root)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // Example usage
    struct node* root = new node{10, nullptr, nullptr};
    root->left = new node{9, nullptr, nullptr};
    root->right = new node{8, nullptr, nullptr};
    root->left->left = new node{7, nullptr, nullptr};
    root->left->right = new node{6, nullptr, nullptr};
    
    if (isheap(root)) {
        cout << "The binary tree is a heap." << endl;
    } else {
        cout << "The binary tree is not a heap." << endl;
    }

    return 0;
}
