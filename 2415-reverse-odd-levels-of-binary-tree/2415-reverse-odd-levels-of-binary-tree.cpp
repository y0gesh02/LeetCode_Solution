class Solution {
public:
    
    TreeNode* reverseOddLevels(TreeNode* root) {
        int cnt=1;
        solve(root->left,root->right,cnt);
        return root;
     
    }
    void solve(TreeNode* l1,TreeNode* l2,int cnt){
         if(l1==NULL && l2==NULL)return ;
         if(cnt%2!=0){
           swap(l1->val,l2->val);
         }
       
        solve(l1->left,l2->right,cnt+1);
        solve(l1->right,l2->left,cnt+1);
        
        
    }
};