class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        maxdia(root,maxi);
        return maxi;
    }
private:
    int maxdia(TreeNode* root,int&maxi){
        if(root==NULL) {
            return 0;
        }
        int lh=maxdia(root->left,maxi);
        int rh=maxdia(root->right,maxi);
        maxi=max(maxi,lh+rh);
        return 1 + max(lh,rh);
    }

};