class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        deque<TreeNode*>q{root};
        bool flag=false;
        while(!q.empty()){
            vector<int>levels;
            int n=q.size();
            TreeNode* node=nullptr;
            for(int i=0;i<n;i++){
                
                if(flag){
                 node =q.front();
                 q.pop_front();
                if(node->right!=NULL) q.push_back(node->right);
                if(node->left!=NULL) q.push_back(node->left);
            }
                else{
                  node=q.back();
                  q.pop_back();
                  if(node->left!=NULL) q.push_front(node->left);
                  if(node->right!=NULL) q.push_front(node->right);
                  
                }
                levels.push_back(node->val);
                
            }
            flag=!flag;
            ans.push_back(levels);
        }
        return ans;
    }
};