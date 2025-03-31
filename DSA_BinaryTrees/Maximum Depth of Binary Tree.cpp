int maxDepth(TreeNode* root) {
    if(root==nullptr) return 0;

    int lh=maxDepth(root->left);
    int rh=maxDepth(root->right);

    return 1+max(lh,rh);
 }

 int maxDepth(TreeNode* root) {
    int depth = 0;
    
    if (root == NULL) return depth;
    
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        int size = q.size();
        depth++;
        for (int i = 0; i < size; i++) {
            TreeNode* temp = q.front();
            q.pop();
            if (temp -> left != NULL) q.push(temp -> left);
            if (temp -> right != NULL) q.push(temp -> right);
        }
    }
    
    return depth;
}