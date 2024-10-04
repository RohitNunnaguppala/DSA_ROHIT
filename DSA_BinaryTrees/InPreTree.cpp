node* buildtree(vector<int> &preorder, vector<int> &inorder){
    map<int,int> inmap;

    for(int i=0;i<inorder.size();i++){
        inmap[inorder[i]]=i;
    }

    node* root=buildtree(preorder,0,preorder.size()-1;,inorder,0,preorder.size()-1,inmap)
        return root;
}

node* buildtree(vector<int> &preorder,int prestart,int preend,vector<int> &inorder,int instart,int inend,map<int,int> inmap){
    node* root=new node(preorder[prestart]);

    int inroot=inmap[root->val];
    int numsleft=inroot-instart;

    root->left=buildtree(preorder,prestart+1,prestar+numsleft,inorder,instart,inroot-1,inmap);
    root->right=buildtree(preorder,prestart+numsleft+1,preend,inorder,inroot+1,inend,inmap);
    return root;
}