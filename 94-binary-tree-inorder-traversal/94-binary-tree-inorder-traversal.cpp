class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode* >st;
        TreeNode* node=root;
        vector<int>ans;
        while(true){
           if(node!=NULL){
               st.push(node);
               node=node->left;
           } 
            else{
                if(st.empty())break;
                node=st.top();
                st.pop();
                ans.push_back(node->val);
                node=node->right;
            }
        }
        return ans;
    }
};