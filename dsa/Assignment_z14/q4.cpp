/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *h=NULL,*t,*t2;
        if(head==NULL)
        {
            return h;
        }
        map<Node*,Node*>m;
        t=new Node(head->val);
        h=t;
        t2=head->next;
        m[head]=h;
        while(t2!=NULL)
        {
            t->next=new Node(t2->val);
            t=t->next;
            m[t2]=t;
            t2=t2->next;
        }
        t2=head;
        t=h;
        while(t2!=NULL)
        {
            t->random=m[t2->random];
            t=t->next;
            t2=t2->next;
        }
        return h;
    }
};