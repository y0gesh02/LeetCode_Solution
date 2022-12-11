
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        solve(maxi,root);
        return maxi;
    }
     int solve(int &maxi,TreeNode* root){
         if(root==NULL)return 0;
         int l=max(0,solve(maxi,root->left));
         int r=max(0,solve(maxi,root->right));
         maxi=max(maxi,l+r+root->val);
         return max(l,r)+root->val;
     }
};