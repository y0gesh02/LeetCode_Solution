class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        solve(root,maxi);
        return maxi;
    }
    int solve(TreeNode* root,int &maxi){
        if(root==NULL)return 0;
        int ls=max(0,solve(root->left,maxi));
        int rs=max(0,solve(root->right,maxi));
        maxi=max(maxi,ls+rs+root->val);
        return root->val+max(ls,rs);
    }  
};