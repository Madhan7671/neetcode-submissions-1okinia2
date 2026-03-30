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
        curr=curr->next;
        count++;
    }
    return count;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0,head);
        int len=length(head);
        int k=len-n;
        int i=0;
        ListNode* curr=dummy;
        while(curr && i<k)
        {
            curr=curr->next;
            i++;
        }
        ListNode* del=curr->next;
        curr->next=curr->next->next;
        delete(del);
        return dummy->next;
    }
};
