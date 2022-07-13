class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            bool f1=false,f2=false;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->val==x)f1=true;
                if(node->val==y)f2=true;
                 if(node->left && node->right){
                if((node->left->val==x && node->right->val==y)|| (node->left->val==y && node->right->val==x))
                    return false;
                }
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                
            }
            if(f1&&f2){
                return true;
            }
        }
        return false;
        
    }
};