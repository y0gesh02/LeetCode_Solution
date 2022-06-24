class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        int lh=minDepth(root->left)+1;
        int rh=minDepth(root->right)+1;
        int p=min(lh,rh);
        if(p>1)return p;
        return  max(lh,rh);
    }
};