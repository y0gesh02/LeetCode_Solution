/**
 Time Complexity : O(N), where N is the total number of nodes in original linked list.
Space Complexity : O(1). Note that we are not making duplicate nodes, just rearranging the original nodes in our partitioned.
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lesser=new ListNode(0);
        ListNode* greater=new ListNode(0);
        ListNode* l1=lesser,*l2=greater, *curr=head;
        while(curr!=NULL){
            if(curr->val<x){
                l1->next=curr;
                l1=curr;
            }
            else{
                l2->next=curr;
                l2=curr;
            }
            curr=curr->next;
        }
        l2->next=NULL;
       l1->next=greater->next;
        return lesser->next;
    }
};