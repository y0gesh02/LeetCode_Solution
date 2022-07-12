class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int n=q.size();
            vector<int>levels(n);
            for(int i=0;i<n;i++){
                  TreeNode* node=q.front();
                  q.pop();
                  if(node->left!=NULL) q.push(node->left);
                  if(node->right!=NULL) q.push(node->right);
                 if(flag){
                     levels[i]=node->val;
                 }
                else{
                    levels[n-i-1]=node->val;
                }
            }
            flag=!flag;
            ans.push_back(levels);
        }
        return ans;
    }
};