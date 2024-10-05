#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void levelordertraversal(node* root){
    if(root == nullptr) return;
    queue<node*> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == nullptr){
            cout << endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root){
    if(root == nullptr){
        return;
    }
    
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

node* insertintobst(node* root, int d){  // Changed return type to node*
    if(root == nullptr){
        root = new node(d);
        return root;
    }

    if(d > root->data){
        root->right = insertintobst(root->right, d);
    }
    else{
        root->left = insertintobst(root->left, d);
    }
    return root;
}

void takeinput(node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertintobst(root, data);  // Insert and update root
        cin >> data;
    }
}

int main(){
    node* root = nullptr;
    cout << "Enter data to create BST (-1 to stop): " << endl;
    takeinput(root);

    cout << "Level order traversal of BST:" << endl;
    levelordertraversal(root);

    cout << endl << "Inorder traversal: " << endl;
    inorder(root);

    cout << endl << "Preorder traversal: " << endl;
    preorder(root);

    cout << endl << "Postorder traversal: " << endl;
    postorder(root);

    return 0;
}
