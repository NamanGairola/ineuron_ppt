/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

Node *removeLoop(Node *head)
{
    Node *slow=head,*fast=head,*prev;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        prev=fast->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(slow==fast)
    {
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=NULL;
    }
    return head;
    // Write your code here.
}