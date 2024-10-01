  

  bool balancedtree(node* root){
    return height(root) != -1;
  }

  int height(node* root){
    if(root==nullptr) return 0;

    int left=height(root->left);
    int right=height(root->right);

    if(left==-1 || right ==-1){
        return -1;
    }
    if(abs(left-right)>1){
        return -1;
    }
    return max(left,right)+1;
  }