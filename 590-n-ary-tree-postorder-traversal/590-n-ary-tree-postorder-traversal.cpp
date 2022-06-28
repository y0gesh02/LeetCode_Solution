class Solution {
    void postorder(Node* root ,vector<int>&ans){
        if(root==NULL)return ;
        for(int i=0;i<root->children.size();i++){
            postorder(root->children[i],ans);
        }
        ans.push_back(root->val);
    }
public:
    vector<int> postorder(Node* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        postorder(root,ans);
        return ans;
    }
};