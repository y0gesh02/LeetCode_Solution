class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        solve(root,k,ans);
        return ans;
    }
    void solve(TreeNode* root, int&k,int& ans){
        if(root==NULL)return ;
        if(root->left!=NULL) solve(root->left,k,ans);
         k-=1;
        if(k==0){
            ans=root->val;
            return;
        }
        if(root->right!=NULL) solve(root->right,k,ans);
     }
};