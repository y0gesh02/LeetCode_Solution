class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
          vector<int> ans;
        stack<TreeNode*> s;
        TreeNode* curr=root;
        while(!s.empty()||curr)
        {
            if(curr)
            {
                s.push(curr);
                curr=curr->left;
            }
            else
            {
                TreeNode* temp=s.top()->right;
                
                if(!temp)
                {
                    temp=s.top();s.pop();
                    ans.push_back(temp->val);
                    while(!s.empty()&&s.top()->right==temp)
                    {
                        temp=s.top();s.pop();
                        ans.push_back(temp->val);
                    }
                }
                else curr=temp;
            }
        }
        return ans;
    }
};