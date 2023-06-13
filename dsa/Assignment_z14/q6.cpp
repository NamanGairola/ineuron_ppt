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
    ListNode* rotateRight(ListNode* head, int k){
        ListNode *t,*nh;
        t=head;
        int count=0,i;
        while(t!=NULL)
        {
            count++;
            t=t->next;
        }
        if(head==NULL)
        {
            return head;
        }
        k=k%count;
        if(k==0)
        {
            return head;
        }
        k=count-k;
        t=head;
        for(i=0;i<k-1;i++)
        {
            t=t->next;
        }
        nh=t->next;
        t->next=NULL;
        t=nh;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=head;
        return nh;
    }
};