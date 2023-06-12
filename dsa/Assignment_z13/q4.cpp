class Node
{
	public:
	int data;
	Node* next;
};

Node *kAltReverse(Node *head, int k)
{
	Node* cur = head,*next,*prev = NULL;
	int count = 0;
	while (cur != NULL && count < k)
	{
	next = cur->next;
	cur->next = prev;
	prev = cur;
	cur = next;
	count++;
	}
	if(head != NULL)
	head->next = cur;
	count = 0;
	while(count < k-1 && cur != NULL )
	{
	cur = cur->next;
	count++;
	}
	if(cur != NULL)
	cur->next = kAltReverse(cur->next, k);
	return prev;
}
