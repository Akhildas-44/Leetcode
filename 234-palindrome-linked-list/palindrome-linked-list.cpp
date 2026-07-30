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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=nullptr;
        ListNode* curr=slow;
        while(curr!=nullptr)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
       ListNode* firsthalf=head;
       ListNode* secondhalf=prev;
       while(secondhalf!=nullptr)
       {
        if(firsthalf->val!=secondhalf->val)
        {
            return false;
        }
        firsthalf=firsthalf->next;
        secondhalf=secondhalf->next;
       } 
       return true;
    }
};