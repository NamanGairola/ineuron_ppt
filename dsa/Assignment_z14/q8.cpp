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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*>m;
        ListNode *temp=head;
        int sum=0;
        ListNode *allzero=new ListNode(0);
        allzero->next=head;
        m[0]=allzero;
        while(temp!=NULL)
        {
            sum+=temp->val;
            m[sum]=temp;
            temp=temp->next;
        }
        temp=allzero;
        sum=0;
        while(temp!=NULL)
        {
            sum+=temp->val;
            temp->next=m[sum]->next;
            temp=temp->next;
        }
        return allzero->next;
    }
};