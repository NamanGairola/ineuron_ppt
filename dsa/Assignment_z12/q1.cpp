// 💡 **Question 1**

// Given a singly linked list, delete **middle** of the linked list. For example, if given linked list is 1->2->**3**->4->5 then linked list should be modified to 1->2->4->5.If there are **even** nodes, then there would be **two middle** nodes, we need to delete the second middle element. For example, if given linked list is 1->2->3->4->5->6 then it should be modified to 1->2->3->5->6.If the input linked list is NULL or has 1 node, then it should return NULL

// **Example 1:**

// ```
// Input:
// LinkedList: 1->2->3->4->5
// Output:1 2 4 5

// ```

// **Example 2:**

// ```
// Input:
// LinkedList: 2->4->6->7->5->1
// Output:2 4 6 5 1
// ```

#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* deleteMiddle(ListNode* head) {
    if(head->next==NULL)
    {
        return NULL;
    }
    ListNode *s=head,*f=head,*p;
    while(s!=NULL && f!=NULL && f->next!=NULL )
    {
        f=f->next->next;
        p=s;
        s=s->next;
    }
    p->next=p->next->next;
    return head;
}