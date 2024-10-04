<<<<<<< HEAD

vector<int> verticalorder(node* root){
    map<int,map<int,vector<int>>> nodes;
    queue<pair<node*,pair<int,int>>> q;
    vector<int> ans;

    if(root==nullptr){
        return ans;
    }

    q.push_back(make_pair(root,make_pair(0,0)));

    while(!q.empty()){
        pair<node*,pair<int,int>> temp=q.front();
        q.pop();

        node* firstnode=temp.first;
        int hd=temp.second.first;
        int lvl=temp.second.first;

        nodes[hd][lvl].push_back(firstnode->data);

        if(frontnode->left){
            q.push(make_pair(frontnode->left,make_pair(hd-1,lvl+1)));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,make_pair(hd+1,lvl+1)));
        }

        for(auto i:nodes){
            for(auto j:i.second){
                for(auto k:j.second){
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
=======

vector<int> verticalorder(node* root){
    map<int,map<int,vector<int>>> nodes;
    queue<pair<node*,pair<int,int>>> q;
    vector<int> ans;

    if(root==nullptr){
        return ans;
    }

    q.push_back(make_pair(root,make_pair(0,0)));

    while(!q.empty()){
        pair<node*,pair<int,int>> temp=q.front();
        q.pop();

        node* firstnode=temp.first;
        int hd=temp.second.first;
        int lvl=temp.second.first;

        nodes[hd][lvl].push_back(firstnode->data);

        if(frontnode->left){
            q.push(make_pair(frontnode->left,make_pair(hd-1,lvl+1)));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,make_pair(hd+1,lvl+1)));
        }

        for(auto i:nodes){
            for(auto j:i.second){
                for(auto k:j.second){
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
>>>>>>> fdadff0f2f3ef37de11bd8730e2370725528393a
}