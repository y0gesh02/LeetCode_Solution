class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if (head == NULL || l == r)
        {
            return head;
        }
        ListNode *start = new ListNode(-1);
        start->next = head;
        ListNode *prev = start;
        ListNode *curr = head;
        while (l > 1)
        {
            prev = curr;
            curr = curr->next;
            l--;
            r--;
        }
        while (r > 1)
        {
            ListNode *temp = curr->next;
            curr->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
            r--;
        }
        return start->next;
    }
};