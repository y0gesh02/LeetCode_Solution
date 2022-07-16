class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
		 // if(!root) return 0;
		 // if(root->left==NULL && root->right==NULL) return root->val;
		 // int val;
		 // queue<TreeNode *> q;
		 // q.push(root);
		 // while(!q.empty()){
		 // int n = q.size();
		 // for(int i=0;i<n;i++){
		 // TreeNode *node = q.front(); q.pop();
		 // if(node->left) q.push(node->left);
		 // if(node->right) q.push(node->right);
		 // if(node->left and (!node->left->left and !node->left->right))
		 // val=node->left->val;
		 // return val;
		 // if(!node->left && node->right ){
		 // val=node->right->val;
		 // }
		 // }
		 // }
		 // return val;
        
        queue<TreeNode *> q;
q.push(root);
int a;

    while(q.size())
    {
        int cnt = 0;
        int n = q.size();
        while(n--)
        {
            TreeNode *temp = q.front();
            q.pop();
            if(cnt == 0)
                a = temp->val;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            cnt++;
        }
    }
    return a;
    }
    
};
//   3
//  1  5   
// 0 2 4 6 