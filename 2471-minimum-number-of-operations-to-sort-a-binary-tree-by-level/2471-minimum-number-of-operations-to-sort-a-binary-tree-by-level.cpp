class Solution {
public:
    int countSwap(vector<int>& t){
        int count = 0;
        map<int,int> mp;
        vector<int> u=t;
        for(int i = 0; i < t.size(); ++i){
            mp[t[i]] = i;
        }
        sort(u.begin(), u.end());
        for(int i = 0; i < t.size(); ++i){
            if(t[i] != u[i] ){ 
                t[mp[u[i]]] = t[i];
                mp[t[i]] = mp[u[i]];
                mp[u[i]] = i;
                t[i] = u[i];
                count++;
            }
        }
        return count;
    }
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                v.push_back(node->val);
            }
            ans+=countSwap(v);
        }
        return ans;
    }
    
};