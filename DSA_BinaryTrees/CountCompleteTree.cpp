public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;

        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);

        if (leftHeight == rightHeight) {
            return (1 << leftHeight) + countNodes(root->right);
        } else {
            return (1 << rightHeight) + countNodes(root->left);
        }
    }

private:
    int getHeight(TreeNode* node) {
        int height = 0;
        while (node) {
            height++;
            node = node->left; 
        }
        return height;
    }