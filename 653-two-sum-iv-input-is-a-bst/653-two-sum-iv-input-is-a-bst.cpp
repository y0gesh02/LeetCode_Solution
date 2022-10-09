class Solution {
public:
    unordered_map<int,int>mp;
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)return false;
        
        
        if(mp.find(k-root->val)!=mp.end()) return true;
        mp[root->val]++;
        return findTarget(root->left,k) || findTarget(root->right,k);
    
    }
};