class Solution {
public:
    bool solve(TreeNode* l,TreeNode* r){
        if(l==NULL && r==NULL)return true;
        if(l==NULL || r==NULL)return false;
        return l->val==r->val && solve(l->right,r->left)  &&  solve(l->left,r->right);
    }
    bool isSymmetric(TreeNode* root) {
               if(root==NULL)return true;
               return solve(root->left ,root->right);
                
    }
};