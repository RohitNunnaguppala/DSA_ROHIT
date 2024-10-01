

pair<bool,int> SumTreeFast(node* root){
    if(root==nullptr){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    if(root->left ==nullptr && root->right==nullptr){
        pair<bool,int> p=make_pair(true,root->data);
        return p;
    }

    pair<bool,int> leftans=SumTreeFast(root->left);
    pair<bool,int> rightans=SumTreeFast(root->right);

    bool isleftsumtree=leftans.first;
    bool isrightsumtree=rightans.first;

    int leftsum=leftans.second;
    int rightsum=rightans.second;

    bool condn=root->data==leftsum+rightsum;

    pair<bool,int> ans;

    if(isleftsumtree && isrightsumtree && condn){
        ans.first=true;
        ans.second=root->data+leftsum+rightsum;
    }
    else{
        ans.first=false;
    }
    return ans;

}

bool isSum(node*root){
    return  SumTreeFast(root).first;
}