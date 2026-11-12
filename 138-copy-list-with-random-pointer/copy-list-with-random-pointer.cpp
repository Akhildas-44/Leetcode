/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
        {
            return nullptr;
        }
        unordered_map<Node*,Node*>old_to_new;
        old_to_new[nullptr]=nullptr;
        Node* curr=head;
        while(curr)
        {
            old_to_new[curr]=new Node(curr->val);
            curr=curr->next;
        }
        curr=head;
        while(curr)
        {
            Node* copy=old_to_new[curr];
            copy->next=old_to_new[curr->next];
            copy->random=old_to_new[curr->random];
            curr=curr->next;
        }
        return old_to_new[head];
        
    }
};