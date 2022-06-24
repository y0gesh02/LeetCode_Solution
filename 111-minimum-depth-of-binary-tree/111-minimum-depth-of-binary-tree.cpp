class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
         else if (root->left == NULL && root->right == NULL)
            return 1;
        int lh=INT_MAX;
        int rh=INT_MAX;
        if (root->left){
         lh  = minDepth(root->left);
        }
         if (root->right){
              rh=minDepth(root->right);
         }
        
        // if(lh==0) 1+rh;
        // if(rh==0) 1+lh;
        return 1 + min(lh,rh);
    }
};