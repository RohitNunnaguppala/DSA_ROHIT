#include<bits/stdc++.h>
using namespace std;

int height(node* root){
    if(root==null){
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);

    int result=max(left,right)+1;
    return result;
}