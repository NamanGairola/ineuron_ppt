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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        ListNode *t,*n,*no;
        n=head;
        t=head->next;
        no=head->next;
        while(n!=NULL && n->next!=NULL && n->next->next!=NULL)
        {
            n->next=n->next->next;
            no->next=no->next->next;
            n=n->next;
            no=no->next;
        }
        // while(no!=NULL && no->next!=NULL && no->next->next!=NULL)
        // {
        //     no->next=no->next->next;
        //     no=no->next;
        // }
        n->next=t;
        return head;
    }
};