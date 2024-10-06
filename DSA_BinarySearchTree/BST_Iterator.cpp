class BSTIterator {
private: stack<TreeNode*> mystack;
public:
    BSTIterator(TreeNode* root) {
        pushall(root);
    }
    
    int next() {
        TreeNode* tmpnode=mystack.top();
        mystack.pop();
        pushall(tmpnode->right);
        return tmpnode->val;
    }
    
    bool hasNext() {
        return !mystack.empty();
    }
private:void pushall(TreeNode *node){
    for(;node!=nullptr;mystack.push(node),node=node->left);
}
};