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
        // cout<<r;
        if(n==cnt){
           
            return  head->next;
        }
        temp=head;
        cnt=1;
        while(temp->next!=NULL){
            if(cnt==r){
               temp->next=temp->next->next;
                break;
            }
            cnt+=1;
            temp=temp->next;
        }
        
        return head;
        
        
    }
};