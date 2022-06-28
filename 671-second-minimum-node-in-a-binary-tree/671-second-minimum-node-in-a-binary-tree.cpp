class Solution {
public:
    set<int>st;
    void preorder(TreeNode* root){
        if(root==NULL)return ;
        st.insert(root->val);
        preorder(root->left);
        preorder(root->right);
    } 
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL)return -1;
        preorder(root);
        return st.size()<=1?-1:*(++st.begin());
    }
};