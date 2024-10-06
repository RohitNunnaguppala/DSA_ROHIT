class Solution {
public:
    void recoverTree(TreeNode* root) {
        TreeNode *first = nullptr, *second = nullptr;
        TreeNode *prev = nullptr, *pred = nullptr;
        
        while (root) {
            if (root->left) {
                pred = root->left;
                while (pred->right && pred->right != root) {
                    pred = pred->right;
                }
                
                if (!pred->right) {
                    pred->right = root;
                    root = root->left;
                } else {
                    if (prev && prev->val > root->val) {
                        if (!first) first = prev;
                        second = root;
                    }
                    pred->right = nullptr;
                    prev = root;
                    root = root->right;
                }
            } else {
                if (prev && prev->val > root->val) {
                    if (!first) first = prev;
                    second = root;
                }
                prev = root;
                root = root->right;
            }
        }
        if (first && second) {
            std::swap(first->val, second->val);
        }
    }
};