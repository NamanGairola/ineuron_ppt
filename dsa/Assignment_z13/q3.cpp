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
    ListNode* reverseKGroup(ListNode* head, int k)
    {
        ListNode *t=NULL,*n=NULL,*p=NULL,*curr=NULL,*t2=NULL;
        int i,j,count=0,o;
        t=head;
        while(t!=NULL)
        {
            count++;
            t=t->next;
        }
        o=count/k;
        curr=head;
        for(i=0;i<o;i++)
        {
            p=curr;
            n=curr->next;
            curr=curr->next;
            t=p;
            for(j=0;j<k-1;j++)
            {
                curr=curr->next;
                n->next=p;
                p=n;
                n=curr;
            }
            if(i==0)
            {
                head=p;
            }
            if(t2!=NULL)
            {
                t2->next=p;
            }
            t2=t;
        }
            t2->next=curr;
        return head;
    }
};