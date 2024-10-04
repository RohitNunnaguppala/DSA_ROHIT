<<<<<<< HEAD


pair<int,int> solve(node* root){
    if(root==nullptr){
        pair<int,int> p=make_pair(0,0);
        return p;
    }

    pair<int,int> left=solve(root->left);
    pair<int,int> right=solve(root->right);

    pair<int,int> res;

    res.first=root->data+left.second+right.second;
    res.second=max(left.first,left.second)+max(right.first,right.second);

    return res;
}

int getsum(node* root){
    pair<int,int> ans=solve(root);
    return max(ans.first,ans.second);
=======


pair<int,int> solve(node* root){
    if(root==nullptr){
        pair<int,int> p=make_pair(0,0);
        return p;
    }

    pair<int,int> left=solve(root->left);
    pair<int,int> right=solve(root->right);

    pair<int,int> res;

    res.first=root->data+left.second+right.second;
    res.second=max(left.first,left.second)+max(right.first,right.second);

    return res;
}

int getsum(node* root){
    pair<int,int> ans=solve(root);
    return max(ans.first,ans.second);
>>>>>>> fdadff0f2f3ef37de11bd8730e2370725528393a
}