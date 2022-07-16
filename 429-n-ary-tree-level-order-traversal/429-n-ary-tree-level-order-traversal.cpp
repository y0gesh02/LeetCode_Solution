class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            Node* temp=nullptr;
            vector<int>level;
            for(int i=0;i<n;i++){
                 temp=q.front();
                 q.pop();
                for(int i=0;i<temp->children.size();i++){
                    q.push(temp->children[i]);
                }
                level.push_back(temp->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};