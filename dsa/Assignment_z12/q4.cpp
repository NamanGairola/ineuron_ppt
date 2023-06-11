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
    bool isPalindrome(ListNode* head) {
        ListNode *s=head,*f=head,*t;
        while(f->next!=NULL && f->next->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
        }
        f=s->next;
        s=head;
        string a="",b="";
        while(f!=NULL)
        {

            a.push_back(s->val+48);
            b.push_back(f->val+48);
            s=s->next;
            f=f->next;
        }
        reverse(a.begin(),a.end());
        return a==b;
    }
};