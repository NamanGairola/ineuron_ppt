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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<pair<int,int>>s;
        vector<int>ans;
        int i=0;
        while(head!=NULL)
        {
            ans.push_back(0);
            while(!s.empty() && s.top().second<head->val)
            {
                ans[s.top().first]=head->val;
                s.pop();
            }
            s.push({i,head->val});
            head=head->next;
            i++;
        }
        return ans;
    }
};