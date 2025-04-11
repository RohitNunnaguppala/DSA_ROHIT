int searchBST(node* root,int val){
    while(root!=nullptr&&root->data!=val){
        root=val<root->data?root->left:root->right;
    }
    return root;
}