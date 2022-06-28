
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
    // if(!root) return true;
        queue<TreeNode*> qy;
        qy.push(p);
        qy.push(q);
        while(!qy.empty()){
            TreeNode *left=qy.front();
            qy.pop();
            TreeNode *right=qy.front();
            qy.pop();
            if(left==NULL && right==NULL){
                continue;
            }
            if(left==NULL || right==NULL){
                return false;
            }
            if(left->val!=right->val){
                return false;
            }
            qy.push(left->left);
            qy.push(right->left);
            qy.push(left->right);
            qy.push(right->right);
        }
        return true;     
    }
};