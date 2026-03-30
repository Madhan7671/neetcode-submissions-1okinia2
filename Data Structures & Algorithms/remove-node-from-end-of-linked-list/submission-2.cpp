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
    ListNode* curr=head;
    int count=0;
    while(curr)
    {
        count++;
        curr=curr->next;
    }
    return count;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=length(head)-n+1;
        int x=0;
        ListNode* dummy=new ListNode(n,head);
        ListNode* curr=dummy;
        while(curr)
        {
            x++;
            if(x==k)
            {
                curr->next=curr->next->next;
            }
            curr=curr->next;
        }
        return(dummy->next);
    }
};
