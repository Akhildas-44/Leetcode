/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::unordered_set<ListNode*>visited_nodes;
         ListNode* curr=headB;
        while(curr!=nullptr)
        {
            visited_nodes.insert(curr);
            curr=curr->next;
        }  
         curr=headA;
        while(curr!=nullptr) 
        {
            if(visited_nodes.find(curr)!=visited_nodes.end())
            {
                return curr;
            }
            curr=curr->next;
        }    
        return nullptr;
    }
};