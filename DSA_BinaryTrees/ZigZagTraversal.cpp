<<<<<<< HEAD

vector<int> zigzag(node* root){
    vector<int> result;
    if(root==null){
        return result;
    }

    queue<node*> q;
    q.push(root);

    bool lefttoright=true;

    while(!q.empty()){
        int size=q.size();
        vector<int> ans(size);

        for(int i=0;i<size;i++){
            node* firstnode=q.front();
            q.pop();

            int index=lefttoright? i: size-i-1;
            ans[index]=frontnode->data;

            if(frontnode->left){
                q.push(frontnode->left);
            }
            if(frontnode->right){
                q.push(frontnode->right);
            }

        }

        lefttoright=!lefttoright;

        for(auto i:ans){
            result.push_back(i);
        }

    }
    return result;
=======

vector<int> zigzag(node* root){
    vector<int> result;
    if(root==null){
        return result;
    }

    queue<node*> q;
    q.push(root);

    bool lefttoright=true;

    while(!q.empty()){
        int size=q.size();
        vector<int> ans(size);

        for(int i=0;i<size;i++){
            node* firstnode=q.front();
            q.pop();

            int index=lefttoright? i: size-i-1;
            ans[index]=frontnode->data;

            if(frontnode->left){
                q.push(frontnode->left);
            }
            if(frontnode->right){
                q.push(frontnode->right);
            }

        }

        lefttoright=!lefttoright;

        for(auto i:ans){
            result.push_back(i);
        }

    }
    return result;
>>>>>>> fdadff0f2f3ef37de11bd8730e2370725528393a
}