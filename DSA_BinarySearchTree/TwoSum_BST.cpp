class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        std::unordered_set<int> values;
        return find(root, k, values);
    }

private:
    bool find(TreeNode* node, int k, std::unordered_set<int>& values) {
        if (!node) return false;
        if (values.find(k - node->val) != values.end()) {
            return true;
        }
        values.insert(node->val);
        return find(node->left, k, values) || find(node->right, k, values);
    }
};