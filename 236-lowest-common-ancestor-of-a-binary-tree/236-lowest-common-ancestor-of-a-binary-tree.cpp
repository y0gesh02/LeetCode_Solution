class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if( root == p || root == q || root == NULL)
            return root;
        TreeNode* left = lowestCommonAncestor( root->left, p,  q);
        TreeNode* right = lowestCommonAncestor( root->right,  p,  q);
        if(left == NULL)
            return right; //if left is null and right has vaule;
        else if (right == NULL)
            return left; // if left is null and right has vaule
        else
            return root; // node at which both  p and q lies
    }
};