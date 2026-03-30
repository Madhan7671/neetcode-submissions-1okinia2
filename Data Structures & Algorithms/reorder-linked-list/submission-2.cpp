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
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rl=slow->next;
        ListNode* prev=nullptr;
        slow->next=nullptr;
        while(rl)
        {
            ListNode* nt=rl->next;
            rl->next=prev;
            prev=rl;
            rl=nt;
        }
        ListNode* curr=prev;
        ListNode* first=head;
        while(curr)
        {
            ListNode* temp1=first->next;
            ListNode* temp2=curr->next;
            first->next=curr;
            curr->next=temp1;
            first=temp1;
            curr=temp2;
        }
    }
};
