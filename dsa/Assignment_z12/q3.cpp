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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode *temp=head,*curr=head;
        int i;
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        for(i=0;i<n;i++)
        {
            curr=curr->next;
        }
        if(curr==NULL)
        {
            head=head->next;
            delete temp;
            return head;
        }
        while(curr->next!=NULL)
        {
            curr=curr->next;
            temp=temp->next;
        }
        curr=temp->next;
        temp->next=temp->next->next;
        delete curr;
        return head;
    }
};