class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        double sum=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
               
            }
            ans.push_back(sum/n);
            sum=0;
        }
        return ans;
    }
};







// class Solution {
// public:
//    void solve(TreeNode* root,vector<double>&ans){
//        if(root==NULL)return;
       
//    }
//     vector<double> averageOfLevels(TreeNode* root) {
//         vector<double>ans;
//         solve(root,ans);
//         return ans;
//     }
// };