struct Node
{
	int data;
	struct Node* next;
};

void deleteLast(struct Node** head, int x)
{
	struct Node** tmp1 = NULL;
	while (*head!=NULL)
	{
			if ((*head)->data == x)
			{
				tmp1 = head;
			}
			head = &(*head)->next;
	}
	if (tmp1)
	{
		struct Node* tmp = *tmp1;
		*tmp1 = tmp->next;
		free(tmp);
	}
}