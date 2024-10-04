<<<<<<< HEAD
vector<int> topview(node* root){
    vector<int> ans;
    if(root==nullptr){
        return ans;
    } 

    map<int,int> topnode;
    queue<pair<node*,int>> q;

    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<node*,int> temp =q.front();
        q.pop();
        node* frontnode=temp.first;
        int hd=temp.second();

            topnode[hd]=frontnode->data;

        if(frontnode->left){
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,hd+1));
        }
    }

    for(auto i:topnode){
        ans.push_back(i.second);
    }
    return ans;
=======
vector<int> topview(node* root){
    vector<int> ans;
    if(root==nullptr){
        return ans;
    } 

    map<int,int> topnode;
    queue<pair<node*,int>> q;

    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<node*,int> temp =q.front();
        q.pop();
        node* frontnode=temp.first;
        int hd=temp.second();

            topnode[hd]=frontnode->data;

        if(frontnode->left){
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,hd+1));
        }
    }

    for(auto i:topnode){
        ans.push_back(i.second);
    }
    return ans;
>>>>>>> fdadff0f2f3ef37de11bd8730e2370725528393a
}