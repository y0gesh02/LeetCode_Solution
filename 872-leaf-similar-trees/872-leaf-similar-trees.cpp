class Solution {
public:
    void solve(TreeNode* root, vector<int>&temp){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            temp.push_back(root->val);
        }
        solve(root->left,temp);
        solve(root->right,temp);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a1; 
        vector<int>a2;
        solve(root1,a1);
        solve(root2,a2);
        return a1==a2;
        
        
    }
};