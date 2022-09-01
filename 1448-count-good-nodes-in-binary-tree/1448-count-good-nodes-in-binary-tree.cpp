class Solution {
public:
    int cnt=0;
    int goodNodes(TreeNode* root) {
        int max=INT_MIN;
        solve(root,max);
        return cnt;
    }
    void solve(TreeNode* root,int max){
        if(!root)return ;
        if(root->val>=max){
            cnt++;
            max=root->val;
        }
        solve(root->left,max);
        solve(root->right,max);
     }
};