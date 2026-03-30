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
int len(ListNode* head)
{
    int count=0;
    ListNode* curr=head;
    while(curr)
    {
        curr=curr->next;
        count++;
    }
    return count;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=len(head);
        int k=count-n+1;
        ListNode* dummy=new ListNode(n,head);
        ListNode* curr=dummy;
        int x=0;
        while(curr)
        {
            x++;
            if(x==k)
            {
                ListNode* nexte=curr->next;
                curr->next=curr->next->next;
                delete nexte;
            }
            curr=curr->next;
        }
        return dummy->next;
    }
};
