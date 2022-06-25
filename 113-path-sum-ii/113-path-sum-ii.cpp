class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
          vector<vector<int> > ans;
        vector<int> temp;
        findPaths(root, targetSum, temp, ans);
        return ans;
    }
     void findPaths(TreeNode* node, int target, vector<int>& temp, vector<vector<int> >& ans) {
        if (node==NULL) return;
        temp.push_back(node -> val);
        if (node -> left==NULL && node -> right==NULL && target == node -> val){
            ans.push_back(temp);
        }
         
        findPaths(node -> left, target - node -> val, temp, ans);
        findPaths(node -> right, target - node -> val, temp, ans);
        temp.pop_back();
    }
};