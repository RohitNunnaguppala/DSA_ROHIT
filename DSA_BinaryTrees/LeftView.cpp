<<<<<<< HEAD
void solve(Node* root, vector<int> &ans, int level) {
    if(root == NULL)
        return ;    
    if(level == ans.size())
        ans.push_back(root->data);
        
    solve(root->left, ans, level+1);
    solve(root->right, ans, level+1);
}

vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve(root, ans, 0);
   return ans;
=======
void solve(Node* root, vector<int> &ans, int level) {
    if(root == NULL)
        return ;    
    if(level == ans.size())
        ans.push_back(root->data);
        
    solve(root->left, ans, level+1);
    solve(root->right, ans, level+1);
}

vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve(root, ans, 0);
   return ans;
>>>>>>> fdadff0f2f3ef37de11bd8730e2370725528393a
}
void solve(Node* root, vector<int> &ans, int level) {
    if(root == NULL)
        return ;    
    if(level == ans.size())
        ans.push_back(root->data);
        
    solve(root->left, ans, level+1);
    solve(root->right, ans, level+1);
}

vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve(root, ans, 0);
   return ans;
}
