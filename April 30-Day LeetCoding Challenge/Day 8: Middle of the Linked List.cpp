/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head)
    {
        if(head==NULL)
            return head;
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        while(ptr2!=NULL && ptr2->next!=NULL)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
        }
        return ptr1;
                
    }
};
