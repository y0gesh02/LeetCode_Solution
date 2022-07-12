class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int size = q.size();
            vector<int>v;
            while(size--){
                TreeNode* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->right)q.push(temp->right);
                if(temp->left)q.push(temp->left);
            }
            if(level%2 != 0)
                ans.push_back(v);
            else{
                reverse(v.begin(), v.end());
                ans.push_back(v);
            }
            level++;
        }
        return ans;
    }
};