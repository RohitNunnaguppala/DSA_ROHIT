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
// This function finds the kth smallest element in a binary search tree (BST) using an in-order traversal. It uses a helper function `solve` that performs the traversal and keeps track of the count of nodes visited. When the count matches k, it returns the value of that node. The main function initializes the count and calls the helper function.