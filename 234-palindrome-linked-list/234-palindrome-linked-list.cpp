class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *prev=NULL;
       
        ListNode *temp;
        while(slow!=NULL){
           temp=slow->next;
           slow->next=prev;
            prev=slow;
            slow=temp;
       }
        while(prev!=NULL){
          if(  head->val!=prev->val)return false;
            head=head->next;
            prev=prev->next;
        }
        return true;
    }
};