<<<<<<< HEAD

void slove(node* root,int k,int &count,vector<int> path){
    if(root==null){
        return ;
    }
    path.push_back(root->data);

    solve(root->left,k,count,path);
    solve(root->right,k,count,path);

    int size=path.size();
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=path[i];
        if(sum==k){
            count++;
        }
    }

    path.pop_back();

}


int sumk(node* root,int k){
    vector<int> path;
    int count=0;
    solve(root,k,count,path);
    return count;
=======

void slove(node* root,int k,int &count,vector<int> path){
    if(root==null){
        return ;
    }
    path.push_back(root->data);

    solve(root->left,k,count,path);
    solve(root->right,k,count,path);

    int size=path.size();
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=path[i];
        if(sum==k){
            count++;
        }
    }

    path.pop_back();

}


int sumk(node* root,int k){
    vector<int> path;
    int count=0;
    solve(root,k,count,path);
    return count;
>>>>>>> fdadff0f2f3ef37de11bd8730e2370725528393a
}