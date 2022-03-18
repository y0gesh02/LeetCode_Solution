
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         if (!head || !head->next ) return NULL;
     ListNode* slow=head;
     ListNode* fast=head;
     while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
            break ;
     }
     if(fast!=slow)
            return NULL;
     slow= head;
        while(slow!=fast){
           slow= slow->next;
            fast=fast->next;
            
        }
        
    return slow;
    }
};