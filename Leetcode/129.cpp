/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return sumNumbersHelper(root, 0);
    }
private:
    int sumNumbersHelper(TreeNode* node, int currentSum) {
        if (node == nullptr) {
            return 0;
        }

        currentSum = currentSum * 10 + node->val;
        if (node->left == nullptr && node->right == nullptr) {
            return currentSum;
        }

        return sumNumbersHelper(node->left, currentSum) + sumNumbersHelper(node->right, currentSum);
    }
};