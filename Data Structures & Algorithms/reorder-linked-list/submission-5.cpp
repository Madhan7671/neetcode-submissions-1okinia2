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
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* prev=nullptr;
        ListNode* newp=slow->next;
        slow->next=nullptr;
        while(newp)
        {
            ListNode* ne=newp->next;
            newp->next=prev;
            prev=newp;
            newp=ne;
        }
        ListNode* curr=head;
        while(prev)
        {
            ListNode* ne=curr->next;
            ListNode* pe=prev->next;
            curr->next=prev;
            prev->next=ne;
            curr=ne;
            prev=pe;
        }
        
    }
};
