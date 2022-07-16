class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
		 if(!root) return 0;
		 int val;
		 queue<TreeNode *> q;
		 q.push(root);
		 while(!q.empty()){
		    int n = q.size();
            int cnt=0;
		    for(int i=0;i<n;i++){
		        TreeNode *node = q.front(); q.pop();
                if(cnt==0) val=node->val;
		        if(node->left) q.push(node->left);
		        if(node->right) q.push(node->right);
                cnt++;
		    }
		 }
		 return val;
    }
};
       