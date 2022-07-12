class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int l=1;
        while(!q.empty()){
            vector<int>levels;
            int n=q.size();
            for(int i=0;i<n;i++){
                  TreeNode* node=q.front();
                  q.pop();
                  if(node->left!=NULL) q.push(node->left);
                  if(node->right!=NULL) q.push(node->right);
                  levels.push_back(node->val);
            }
            if(l%2==0){
                reverse(levels.begin(),levels.end());
                ans.push_back(levels);
            }
            else{
              ans.push_back(levels);  
            }
            l++;
            
        }
        return ans;
    }
};