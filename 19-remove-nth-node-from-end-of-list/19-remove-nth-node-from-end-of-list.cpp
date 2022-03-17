
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* count=head;
        int cnt=0;
        while(count!=NULL){
          count=count->next;
            cnt+=1;
        }
        if(cnt==n)return head->next;
         int d=cnt-n;
        
         ListNode* curr=head;
         for(int i=1;i<d;i++){
            curr=curr->next;
         }
        curr->next=curr->next->next;
        return head;
    }
};