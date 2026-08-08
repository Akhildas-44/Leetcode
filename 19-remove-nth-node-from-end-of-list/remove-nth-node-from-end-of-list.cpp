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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* sentinel= new ListNode;
        sentinel->next=head;
        ListNode* first=sentinel;
        ListNode* second=sentinel;
        for(int i=0;i<n;i++)
        {
            first=first->next;
        }
        while(first->next!=nullptr)
        {
            first=first->next;
            second=second->next;
        }
        second->next=second->next->next;
        return sentinel->next;
        
    }
};