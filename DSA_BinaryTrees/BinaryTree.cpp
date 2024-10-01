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

void levelOrderTraversal(Node* root) {
    if (root == nullptr) return;
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    q.push(nullptr);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if (temp == nullptr) {
            cout << endl;
            if (!q.empty()) {
                q.push(nullptr);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

void ReverselevelOrderTraversal(Node* root){
    if(root==nullptr) return;
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);

    while(!q.empty()){
        Node* temp= q.front();
        q.pop();
        s.push(temp);

        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
    }
        while(!s.empty()){
            cout<<s.top()->data<<" ";
            s.pop();
        }
        cout<<endl;
}


void inorder(Node* root){
    if(root==nullptr) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right); 
}

void preorder(Node* root){
    if(root==nullptr) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right); 
}

void postorder(Node* root){
    if(root==nullptr) return;

    postorder(root->left);
    postorder(root->right); 
    cout<<root->data<<" ";
}

void buildtreelevelorder(Node* &root){
    queue<Node*> q;
    cout<<"Enter root: ";
    int data;
    cin>>data;
    root=new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        cout<<"Enter the left node for: "<<temp->data<<endl;
         int leftdata;
         cin>>leftdata;

         if(leftdata!=-1){
             temp->left=new Node(leftdata);
             q.push(temp->left);
         }

         cout<<"Enter the right node for: "<<temp->data<<endl;
         int rightdata;
         cin>>rightdata;

         if(rightdata!=-1){
             temp->left=new Node(rightdata);
             q.push(temp->right);
         }
    }
}
int main() {
    Node* root=nullptr;

    buildtreelevelorder(root);
    levelOrderTraversal(root);
//     root = buildtree();
//     cout << "Level Order Traversal:\n";
//     levelOrderTraversal(root);
//     cout << "Reverse Level Order Traversal:\n";
//     ReverselevelOrderTraversal(root);
//     cout<<"inorder traversal: ";
//     inorder(root);

//     cout<<"preorder traversal: ";
//     preorder(root);

//     cout<<"postorder traversal: ";
//     postorder(root);

    return 0;
}
