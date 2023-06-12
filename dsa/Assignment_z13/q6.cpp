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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
        {
            return list1;
        }
        else if(list1==NULL)
        {
            return list2;
        }
        else if(list2==NULL)
        {
            return list1;
        }
        ListNode *a,*t;
        if(list1->val<list2->val)
        {
            a=new ListNode(list1->val);
            list1=list1->next;
        }
        else
        {
            a=new ListNode(list2->val);
            list2=list2->next;
        }
        t=a;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                t->next=new ListNode(list1->val);
                list1=list1->next;
            }
            else
            {
                t->next=new ListNode(list2->val);
                list2=list2->next;
            }
            t=t->next;
        }
        while(list1!=NULL)
        {
            t->next=new ListNode(list1->val);
            list1=list1->next;
            t=t->next;
        }
        while(list2!=NULL)
        {
            t->next=new ListNode(list2->val);
            list2=list2->next;
            t=t->next;
        }
        return a;
    }
};