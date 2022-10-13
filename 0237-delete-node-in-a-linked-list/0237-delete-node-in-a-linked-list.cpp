class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*prev=node;
        ListNode*curr=node->next;
        ListNode*forw=node->next->next;
        
        prev->val=curr->val;
        prev->next=forw;
    }
};