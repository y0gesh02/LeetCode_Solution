class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)return NULL;
        if(root->val==key)return solve(root);
         TreeNode*dummy=root;
        while(root!=NULL){
            if(root->val>key){
                if(root->left!=NULL && root->left->val==key){
                    root->left=solve(root->left);
                }
                else root=root->left; 
            }
            else{
               if(root->right!=NULL && root->right->val==key){
                   root->right=solve(root->right);
               } 
                else root=root->right;
            }
        }
        return dummy;
    }
    TreeNode* solve(TreeNode* root){
        if(root->left==NULL)return root->right;
        if(root->right==NULL)return root->left;
        TreeNode* rightChild=root->right;
        TreeNode*rightMost=findrightMost(root->left);
        rightMost->right=rightChild;
        return root->left;
    }
    TreeNode* findrightMost(TreeNode* root){
        if(root->right==NULL)return root;
        return findrightMost(root->right);
    }
    
};