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
            ListNode* ne=rl->next;
            rl->next=prev;
            prev=rl;
            rl=ne;
        }
        ListNode* le=prev;
        ListNode* fr=head;
        while(le)
        {
            ListNode* nf=fr->next;
            ListNode* ne=le->next;
            fr->next=le;
            le->next=nf;
            fr=nf;
            le=ne;
        }
    }
};
