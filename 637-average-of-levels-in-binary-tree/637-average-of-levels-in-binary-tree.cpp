class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            double temp=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* Node=q.front();q.pop();
                temp+=Node->val;
                if(Node->left) q.push(Node->left);
                if(Node->right) q.push(Node->right);
            }
            ans.push_back(temp/n);
        }
        return ans;
    }
};