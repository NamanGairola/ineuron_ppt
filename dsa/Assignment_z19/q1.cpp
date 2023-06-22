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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head=NULL,*temp=NULL,*curr=NULL;
        int i;
        vector<int> v;
        for(i=0;i<lists.size();i++)
        {
            temp=lists[i];
            while(temp!=NULL)
            {
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(v.begin(),v.end());
        if(v.size()==0)
        {
            return NULL;
        }
        head=new ListNode(v[0]);
        curr=head;
        for(i=1;i<v.size();i++)
        {
            ListNode *t=new ListNode(v[i]);
            curr->next=t;
            curr=curr->next;
        }
        return head;
    }
};