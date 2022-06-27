class Solution {
public:
    int sum=0;
    int sum1(TreeNode* root){
        if(root==NULL)return 0;
        int lh = sum1(root->left);
        
        int rs=sum1(root->right);
        sum+=abs(lh-rs);
        return lh+rs+root->val;
    }
    int findTilt(TreeNode* root) {
        
        sum1(root);
        return sum; 
    }
};