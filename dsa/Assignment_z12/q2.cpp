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
    bool hasCycle(ListNode *head) {
        ListNode *s=head,*f=head;
        if(head==NULL)
        {
            return false;
        }
        while(s->next!=NULL && f->next!=NULL && f->next->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
            if(s==f)
            {
                return true;
            }
        }
        return false;
    }
};