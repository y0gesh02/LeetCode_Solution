class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
        ListNode *curr=dummy;
        ListNode *prev=NULL;
       
        for(int i=0;i<left;i++){
            prev=curr;
            curr=curr->next;
        }
        
        // curr=prev->next;
        ListNode *currR=curr;
        ListNode *prevR=prev;
        
        for(int i=left;i<=right;i++){
                    ListNode* nex=currR->next;
                    currR->next=prevR;
                    prevR=currR;
                    currR=nex;
              }
         curr->next=currR;
        prev->next=prevR;
           
        
//         while(temp->next!=NULL){
//             //temp=temp->next;
//             cnt+=1;
//             if(cnt==left ){
//                prev=temp; 
//             }
//             if(cnt-1==right){
//                 ListNode *curr=temp;
//                 //ListNode *temp;
//                 while(diff--){
//                     //temp=curr->next;
//                     prev->next=curr;
//                     curr=prev;
//                     prev=prev->next;
                    
//                  }
//                 break;
//             }
            
//             temp=temp->next;
            
        
        return dummy->next;
    }
};