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
        ListNode* curr=head;
        for(int i=0;i<k;i++)
        {
            if(!curr)
            {
                return head;
            }
            curr=curr->next;
        }
        ListNode* curr2=head;
        ListNode* prev=nullptr;
        int i=0;
        while(curr2 && i<k)
        {
            ListNode* nexte=curr2->next;
            curr2->next=prev;
            prev=curr2;
            curr2=nexte;
            i++;
        }
        head->next=reverseKGroup(curr2,k);
        return prev;
    }
};
