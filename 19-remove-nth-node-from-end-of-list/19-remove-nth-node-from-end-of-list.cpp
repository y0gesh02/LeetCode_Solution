class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt+=1;
        }
        int r=cnt-n;
        if(cnt==n){
            ListNode* temp1 = head;
            head = head->next;
            return head;
        }
        temp=head;
        cnt=1;
        while(temp->next!=NULL){
             if(cnt==r){
                 temp->next=temp->next->next;
                 break;
             }
             temp=temp->next;
             cnt+=1;
         }
        return head;
    }
};