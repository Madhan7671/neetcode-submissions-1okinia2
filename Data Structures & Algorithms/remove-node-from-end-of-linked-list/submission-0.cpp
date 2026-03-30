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
int length(ListNode* head)
{
    int l=0;
    ListNode* curr=head;
    while(curr)
    {
        l++;
        curr=curr->next;
    }
    return l;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=length(head)-n+1;
        ListNode* dummy=new ListNode(0,head);
        ListNode* curr=dummy;
        int x=0;
        while(curr)
        {
         x++;
         if(x==k)
         {
            curr->next=curr->next->next;
            break;
         }
         else
         {
            curr=curr->next;
         }
        }
        return dummy->next;
    }
};
