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
int fn(ListNode* head)
{
    int count=0;
    ListNode* curr=head;
    while(curr)
    {
        count++;
        curr=curr->next;
    }
    return count;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=fn(head);
        int k=len-n+1;
        int x=0;
        ListNode* dummy=new ListNode(n,head);
        ListNode* curr=dummy;
        while(curr && x<k)
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
