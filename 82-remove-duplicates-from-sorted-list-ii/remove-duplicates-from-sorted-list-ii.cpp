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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* prev=dummy;
        ListNode* curr=head;
        while(curr && curr->next)
        {
            if(curr->val!=curr->next->val)
            {
                curr=curr->next;
                prev=prev->next;
            }
            else
            {
                while(curr && curr->next && curr->val==curr->next->val)
                {
                    curr=curr->next;
                }
                curr=curr->next;
                prev->next=curr;
            }
        } 
        return dummy->next;
        
    }
};