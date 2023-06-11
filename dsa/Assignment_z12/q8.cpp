/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *getListAfterDeleteOperation(Node *head, int n, int m)
{
	int i;
	Node *prev=NULL,*cur=head;
	while(cur!=NULL)
	{
		if(prev!=NULL)
		{
			prev->next=cur;
		}
		for(i=0;i<m && cur!=NULL;i++)
		{
			prev=cur;
			cur=cur->next;
		}
		for(i=0;i<n && cur!=NULL;i++)
		{
			cur=cur->next;
		}
	}
	return head;
	// Write your code here.
}