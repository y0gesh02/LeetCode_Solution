class Solution {
public:
    int ans;
    int kthSmallest(TreeNode* root, int k) {
        
        solve(root,k);
        return ans;
    }
    void solve(TreeNode* root, int& k ){
        if(root==NULL)return ;
        solve(root->left,k);
         k-=1;
        if(k==0){
            ans=root->val;
            return;
        }
        solve(root->right,k);
     }
};