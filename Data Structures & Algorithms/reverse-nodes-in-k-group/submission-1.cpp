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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr)
        {
            return nullptr;
        }
        ListNode* curr=head;
        for(int i=0;i<k;i++)
        {
            if(!curr)
            {
                return head;
            }
            curr=curr->next;
        }
        ListNode* prev=nullptr;
        ListNode* curr1=head;
        int m=0;
        while(curr1 && m<k)
        {
            ListNode* ne=curr1->next;
            curr1->next=prev;
            prev=curr1;
            curr1=ne;
            m++;
        }
        head->next=reverseKGroup(curr1,k);
        return prev;
    }
};
