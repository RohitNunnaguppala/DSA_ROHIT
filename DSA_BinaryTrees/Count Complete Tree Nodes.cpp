class Solution {
    public:
        int countNodes(TreeNode* r) {
            if (r == NULL) return 0;
    
            int lh = leftHeight(r);
            int rh = rightHeight(r);
    
            if (lh == rh) return (1 << lh) - 1;
    
            return 1 + countNodes(r->left) + countNodes(r->right);
        }
    
        int leftHeight(TreeNode* n) {
            int h = 0;
            while (n) {
                h++;
                n = n->left;
            }
            return h;
        }
    
        int rightHeight(TreeNode* n) {
            int h = 0;
            while (n) {
                h++;
                n = n->right;
            }
            return h;
        }
    };
    