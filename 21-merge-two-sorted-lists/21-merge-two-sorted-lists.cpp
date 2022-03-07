/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
          ListNode* dummy=NULL;
          ListNode* p=NULL;
        
        if(list1 && list2){
        if((list1->val)<=(list2->val)){
            p=list1;
            list1=p->next;
        }
        else{
            p=list2;
            list2=p->next;
        }
             dummy=p;
            
             while(list1!=NULL && list2!=NULL){
            if((list1->val)<=(list2->val)){
                p->next=list1;
                p=list1;
                list1=p->next;
                }
            else{
                p->next=list2;
                p=list2;
                list2=p->next;
                }
             }
    }
        
        if(list1==NULL) p->next=list2;
        if(list2==NULL) p->next=list1;
        return dummy;
    }
};