class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(1);
        ListNode*temp=dummy;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<=l2->val){
               temp->next=l1;
                l1=l1->next;
                temp=temp->next;
            }
            else{
                temp->next=l2;
                l2=l2->next;
                temp=temp->next; 
            }
        }
        if(l1!=NULL)temp->next=l1;
        if(l2!=NULL)temp->next=l2;
        return dummy->next;
    }
};