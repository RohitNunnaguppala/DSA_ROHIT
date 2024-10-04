
bool searchINBST(node* root,int x){
    if(root==nullptr){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data>x){
        return searchINBST(root->left,x);
    }
    else{
        return searchINBST(root->right,x)
    }
}

bool searchINBST(node* root,int x){
    node* temp=root;

    while(temp!=nullptr){
        if(temp->data==x){
            return true;
        }
        if(temp->data>x){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    return false;
}