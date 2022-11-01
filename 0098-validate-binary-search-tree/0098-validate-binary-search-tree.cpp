class Solution {
public:
    bool isValidBST(TreeNode* root) {
       return solve(root,LLONG_MAX,LLONG_MIN);
    }
    bool solve(TreeNode* root,long maxi,long mini){
        if(!root)return true;
        if(root->val>=maxi || root->val<=mini)return false;
        return solve(root->left,root->val,mini) && solve(root->right,maxi,root->val);
    }
};