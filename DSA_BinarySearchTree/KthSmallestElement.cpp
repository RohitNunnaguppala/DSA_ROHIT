int solve(TreeNode* root, int& i, int k) {
        if (root == nullptr) {
            return -1;
        }
        int left = solve(root->left, i, k);
        if (left != -1) {
            return left;
        }
        i++;
        if (i == k) {
            return root->val;
        }
        return solve(root->right, i, k);
    }
 
    int kthSmallest(TreeNode* root, int k) {
        int i = 0; 
        return solve(root, i, k);
    }