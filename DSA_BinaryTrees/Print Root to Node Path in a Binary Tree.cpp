

class Solution {
    public:

    bool getpath(TreeNode* A, int B, vector<int>& res){
        if(A == NULL) return false;
        res.push_back(A->val);
        if(A->val == B) return true;
        if(getpath(A->left, B, res) || getpath(A->right, B, res)) return true;
        res.pop_back();
        return false;
    }
    vector<int> solve(TreeNode* A, int B){
        vector<int> res;
        if(A == NULL) return res;
        getpath(A, B, res);
        return res;
    }