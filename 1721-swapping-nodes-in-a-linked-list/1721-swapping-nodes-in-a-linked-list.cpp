/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode* slow=head,*fast=head,*n1=head;
        for(int i=0;i<k-1;i++){
            fast=fast->next;
            n1=fast;
        }
        while(fast->next!=NULL){
            slow=slow->next;
             fast=fast->next;
        }
        int n1_val=n1->val;
        n1->val=slow->val;
        slow->val=n1_val;
        return head;
    }
};