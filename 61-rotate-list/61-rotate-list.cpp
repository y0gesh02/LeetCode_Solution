class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL || k==0)return head;
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL){
            temp=temp->next;
            len+=1;
        }
        temp->next=head;
        k=len-k%len;
        while(k--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};