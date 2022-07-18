class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
       vector<int>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int maxi=INT_MIN;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                maxi=max(maxi,temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            ans.push_back(maxi);
            
        }
        return ans;
    }
};