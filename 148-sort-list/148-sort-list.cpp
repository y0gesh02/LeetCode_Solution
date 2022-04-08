
class Solution {
public:
     ListNode* sortList(ListNode* head) {
        if(head == NULL || head ->next == NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head->next; //its just that where do we want the extra node ( ist half or 2nd half) in case of odd no. of nodes :------------------------
//( NOTE: in merge sort , it doesnt matter wheTher u have extra node in ist or 2nd half ( in case of odd no. of total nodes)
         
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow->next;
        slow->next=NULL;
        ListNode* l1=sortList(head);
        ListNode* l2=sortList(fast);
        
        return merge(l1,l2);
    }
    ListNode* merge(ListNode *l1, ListNode *l2){
              ListNode* dummy=new ListNode(0);
              ListNode* temp=dummy;
              while(l1!=NULL && l2!=NULL){
                  if(l1->val < l2->val){
                      temp->next=l1;
                      l1=l1->next;
                    }
                  else{
                      temp->next=l2;
                      l2=l2->next;
                   }
                  temp=temp->next;
                }
             if(l1!=NULL) temp->next=l1;
              
             if(l2!=NULL) temp->next=l2; 
             
         return dummy->next;
     
     }
    
};