class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
       vector<int> ans;
        if (root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
       
        while (!q.empty()){
            int n = q.size();
            TreeNode* curNode;
            for(int i=0;i<n;i++){
                 curNode = q.front();
                q.pop();
                if (curNode->left) q.push(curNode->left);
                if (curNode->right) q.push(curNode->right);
            }
            ans.push_back(curNode->val);
        }
        return ans;
    }
};