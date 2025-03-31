bool isBalanced(TreeNode* root) {
    return dfsHeight(root)!=-1;
}
int dfsHeight(TreeNode* root){
    if(root==nullptr) return 0;

    int lh=dfsHeight(root->left);
    int rh=dfsHeight(root->right);

    if(lh==-1|| rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;

    return max(lh,rh)+1;
}