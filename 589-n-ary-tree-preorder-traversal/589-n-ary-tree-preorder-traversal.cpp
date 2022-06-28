class Solution {
public:
    void preorder(Node* root ,vector<int>&ans){
        if(root==NULL)return ;
        ans.push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            preorder(root->children[i],ans);
        }
        return;
    }
    vector<int> preorder(Node* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        preorder(root,ans);
        return ans;
    }
};