class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
        ListNode*prev=NULL;
        ListNode*curr=dummy;
        for(int i=0;i<left;i++){
            prev=curr;
            curr=curr->next;
        }
        //reversing technique
        ListNode*prevR=prev;
        ListNode* currR=curr;
        for(int i=left;i<=right;i++){
            ListNode*next=currR->next;
            currR->next=prevR;
            prevR=currR;
            currR=next;
        }
        curr->next=currR;
        prev->next=prevR;
        return dummy->next;
    }
};
//1 <- 2 <- 3 <-4 ->5