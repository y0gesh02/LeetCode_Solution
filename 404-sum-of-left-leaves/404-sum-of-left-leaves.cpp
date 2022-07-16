class Solution {
public:
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
         if(!root) return 0;
         int sum = 0;
		 queue<TreeNode *> q;
         q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode *node = q.front(); q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                if(node->left and (!node->left->left and !node->left->right))
                    sum += node->left->val;
            }
        }
        return sum;
    }
};