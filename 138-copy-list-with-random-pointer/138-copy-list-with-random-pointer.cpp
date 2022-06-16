class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mp;
        //mp[NULL] = NULL;
        Node* temp=head;
        while(temp!=NULL){
            Node* copy=new Node(temp->val);
            mp[temp]=copy;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            mp[temp] -> next = mp[temp->next];
            mp[temp] -> random = mp[temp->random];
            temp=temp->next;
        }
        return mp[head];
    }
};
