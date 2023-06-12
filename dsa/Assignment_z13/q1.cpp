struct Node {
	int data;
	Node* next;
};

Node* newList(Node* root1, Node* root2)
{
	Node *t1 = root1, *t2 = root2, *prev;
	Node *root = NULL, *cur;

	while (t1 != NULL) {
		cur = new Node;
		cur->next = NULL;

		// Compare for greater node
		if (t1->data < t2->data)
			cur->data = t2->data;
		else
			cur->data = t1->data;

		if (root == NULL)
			root = cur;
		else {
			prev = root;
			while (prev->next != NULL)
				prev = prev->next;

			prev->next = cur;
		}
		t1 = t1->next;
		t2 = t2->next;
	}
	return root;
}