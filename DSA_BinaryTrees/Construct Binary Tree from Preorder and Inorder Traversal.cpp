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
        TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
           map<int,int> imap;
           for(int i=0;i<inorder.size();i++){
            imap[inorder[i]]=i;
           }
           return buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,imap);
        }
    
    private:
        TreeNode* buildTree(vector<int> &preorder,int prestart,int preend,vector<int> &inorder,int instart,int inend,map<int,int> &imap){
            if(prestart>preend||instart>inend){
                return nullptr;
            }
    
            TreeNode* root=new TreeNode(preorder[prestart]);
    
            int inroot=imap[root->val];
            int numsleft=inroot-instart;
    
            root->left=buildTree(preorder,prestart+1,preend+numsleft,inorder,instart,inroot-1,imap);
            root->right=buildTree(preorder,prestart+numsleft+1,preend+numsleft,inorder,inroot+1,inend,imap);
    
            return root;
    
        }
    };