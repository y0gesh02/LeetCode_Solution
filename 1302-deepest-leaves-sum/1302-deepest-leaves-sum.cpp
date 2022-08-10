/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if (root == NULL){
        return 0;
    }
    queue<TreeNode *> qu;
    qu.push(root);
    int sumOfCurrLevel = 0;
    while (!qu.empty()){
        int n = qu.size();
        sumOfCurrLevel = 0;
        for(int i=0;i<n;i++){
            TreeNode *head = qu.front();
            qu.pop();
            sumOfCurrLevel += head->val;
            if (head->left != NULL){
                qu.push(head->left);
            }
            if (head->right != NULL){
                qu.push(head->right);
            }
        }
    }
    return sumOfCurrLevel;
    }
};