class Solution {
public:
 
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int preStart,int preEnd,int inStart, int inEnd, map < int, int > & mp) {
        
        if (preStart > preEnd || inStart > inEnd) return NULL;
        
        TreeNode* curr= new TreeNode(preorder[preStart]);
        
        int posRoot=mp[curr->val];
        int nEle=posRoot-inStart;
        
        curr->left=solve(preorder,inorder,preStart+1,preStart+nEle,inStart,posRoot-1,mp);
            
        curr->right=solve(preorder,inorder,preStart+nEle+1,preEnd,posRoot+1,inEnd,mp);
            
        
        return curr;
    }
       TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preStart=0,inStart=0,inEnd=inorder.size()-1,preEnd=preorder.size()-1;
        map<int ,int>mp;
        for(int i=0;i<inorder.size();i++)mp[inorder[i]]=i;
        return solve(preorder,inorder,preStart,preEnd,inStart,inEnd,mp);
    }
    
    
};