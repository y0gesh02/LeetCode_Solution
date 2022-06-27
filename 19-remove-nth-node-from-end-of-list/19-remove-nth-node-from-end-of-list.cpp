class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt+=1;
        }
        //cout<<cnt;
        int r=cnt-n;
        //cout<<r;
        if(cnt==n){
            ListNode* temp1 = head;
         head = head->next;
        // delete temp1;
        return head;
        };
        temp=head;
        cnt=1;
       // ListNode*prev=head;
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