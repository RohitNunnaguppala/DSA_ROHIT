
node* minval(node* root){
    node* temp=root;
    while(temp->left!=null){
         temp=temp->left;
    }
    return root;
}


node* deletenode(node* root,int val){
    if(root==null){
        return root;
    }

    if(root->Data==val){
          if(root->left==nullptr && root->right==nullptr){
            delete root;
            return temp;
          }

          if(root->left!=nullptr && root->right==nullptr){
            node* temp=root->left;
            delete root;
            return temp;
          }

          if(root->left==nullptr && root->right!=nullptr){
            node* temp=root->right;
            delete root;
            return temp;
          }

          if(root->left!=nullptr && root->right!=nullptr){
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deletenode(root->right,mini);
            return root;
          }

    }
    else if(root->Data>val){
        root->left=deletefromBST(root->left,val);
        return root;
    }
    else{
        root->right=deletefromBST(root->right,val);
        return root;
    }