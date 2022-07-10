class Solution {
public:
    bool solve(TreeNode* root){
        if(root->val<2)return root->val;
       // solve(root->left);
      
        if( root->val==3){
            return solve(root->left)&  solve(root->right);
        }
        else{
            return solve(root->left)||  solve(root->right);;
        }
        
    }
    bool evaluateTree(TreeNode* root) {
        return solve(root);
    }
};