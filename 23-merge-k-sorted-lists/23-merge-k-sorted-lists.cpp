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
   ListNode* mergeTwoLists(ListNode* l1,ListNode*l2){
       if(l1==NULL)return l2;
        if(l2==NULL)return l1;
       ListNode* dummy=new ListNode(0);
       ListNode* temp=dummy;
       while(l1!=NULL && l2!=NULL){
           if(l1->val<=l2->val){
               temp->next=l1;
               l1=l1->next;
           }
           else{
               temp->next=l2;
               l2=l2->next;
           }
           temp=temp->next;
       }
       if(l1){
           temp->next=l1;
       }
       if(l2){
           temp->next=l2;
       }
       return dummy->next;
   }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())return NULL;
        int n=lists.size();
        // while(n>1){
        //     lists.push_back(mergeTwoLists(lists[0],lists[1]));
        //     lists.erase(lists.begin());
        //     lists.erase(lists.begin());
        //     ListNode* head = lists[0];
        ListNode* head = lists[0];
        for(int i=1; i<n; i++){
            head = mergeTwoLists(head, lists[i]);
        }
        return head;
        
    }
};