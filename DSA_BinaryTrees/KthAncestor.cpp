<<<<<<< HEAD
node* solve(node*root,int &k,int node){
    if(root==null){
        return null;
    }
    if(root->data==node){
        return root;
    }

    node* leftans=solve(root->left,k,node)
    node* rightans=solve(root->right,k,node)

    if(leftans != nullptr && rightans == nullptr){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return leftans;
    }

    if(leftans == nullptr && rightans != nullptr){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return rightans;
    }
    return nullptr;

}

int kthancestor(node* root,int k,int node){
    node* ans=solve(root,k,node);
    if(ans==nullptr || ans->Data==node){
        return -1;
    }
    else{
        return ans->data;
    }
=======
node* solve(node*root,int &k,int node){
    if(root==null){
        return null;
    }
    if(root->data==node){
        return root;
    }

    node* leftans=solve(root->left,k,node)
    node* rightans=solve(root->right,k,node)

    if(leftans != nullptr && rightans == nullptr){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return leftans;
    }

    if(leftans == nullptr && rightans != nullptr){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return rightans;
    }
    return nullptr;

}

int kthancestor(node* root,int k,int node){
    node* ans=solve(root,k,node);
    if(ans==nullptr || ans->Data==node){
        return -1;
    }
    else{
        return ans->data;
    }
>>>>>>> fdadff0f2f3ef37de11bd8730e2370725528393a
}