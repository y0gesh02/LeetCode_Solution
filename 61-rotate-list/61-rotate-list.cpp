
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)return head;
        int len=1;
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            len+=1;
        }
        k=len-k%len;
        temp->next=head;
        while(k--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};