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
    int getDecimalValue(ListNode* head) {
        ListNode*temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            cnt+=1;
            temp=temp->next;
            
        }
        
        int ans=0;
        while(head!=NULL){
            int t=cnt-1;
            ans+=pow(2,t)*head->val;
            head=head->next;
            cnt-=1;
            
        }
        return ans;
    }
};