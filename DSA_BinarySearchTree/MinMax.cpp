
node* minval(node* root){
    node* temp=root;
    while(temp->left!=nullptr){
        temp=temp->left;
    }
    return temp;
}

node* maxval(node* root){
    node* temp=root;
    while(temp->right!=nullptr){
        temp=temp->right;
    }
    return temp;
}