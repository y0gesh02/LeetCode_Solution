class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* dummy=new ListNode(0,head);
        ListNode* prev=dummy;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if( temp->next!=NULL && temp->val == temp->next->val){
                while(temp->next!=NULL &&temp->val ==temp->next->val){
                    temp=temp->next;
                }
                prev->next=temp->next;
                
                
            }
            else{
                prev=prev->next;
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};















    