class solution{
public:
       void traverseleft(node* root){
        if((root==nullptr) || root->left ==nullptr && root->right==nullptr){
            return;
        }
        ans.push_back(root->data);
        if(root->left){
            traverseleft(root->left,ans);
        }
        else{
            traverseleft(root->right,ans);
        }
       }

       void traverseleaf(node* root){
        if(root==nullptr){
            return;
        }
        if(root->left==nullptr &&root->right==nullptr){
            ans.push_back(root->data);
        }
        traverseleft(root->leaf,ans);
        traverseleaf(root->right,ans);
       }

       void traverseright(node* right){
        if((root==nullptr) || root->left ==nullptr && root->right==nullptr){
            return;
        }
        if(root->right){
            traverseleft(root->right,ans);
        }
        else{
            traverseleft(root->left,ans);
        }

        ans.push_back(root->data);

       }
vector<int> boundary(node* root){
    vector<int> ans;
    if(root==nullptr){
        return;
    }
    ans.push_back(root->data);

    traverseleft(root->left,ans);
    traverseleaf(root->left,ans);
    traverseleaf(root->right,ans);
    traverseright(root->right,ans);
    return ans;
}


};