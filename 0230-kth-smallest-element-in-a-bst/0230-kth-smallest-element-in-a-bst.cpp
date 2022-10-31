class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
       solve(root,k,ans);
        return ans[k-1];
    }
    void solve(TreeNode* root, int k,vector<int>&ans){
        if(root==NULL)return ;
        
        if(root->left!=NULL)solve(root->left,k,ans);
        ans.push_back(root->val);
        if(root->right!=NULL)solve(root->right,k,ans);
     
    }
};