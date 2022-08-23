class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        while(slow!=NULL){
            ListNode* forw=slow->next;
            slow->next=prev;
            prev=slow;;
            slow=forw;
        }
        while(prev!=NULL){
            if(prev->val!=head->val)return false;
            prev=prev->next;
            head=head->next;
        }
        return true;
    }
};