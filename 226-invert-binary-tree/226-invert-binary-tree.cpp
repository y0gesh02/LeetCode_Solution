class Solution {
public:
//     void solve(TreeNode* l,TreeNode* r){
//         if(l==NULL || )return ;
//         solve(l->left,r->right);
//         TreeNode* 
//         solve(r->left,r->right);
        
//     }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        invertTree(root->left);
        invertTree(root->right);
        swap(root->left,root->right);
        return root;
    }
};