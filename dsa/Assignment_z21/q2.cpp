// CPP program to find distance between
// two nodes in BST
#include <bits/stdc++.h>
using namespace std;

struct Node {
	struct Node* left, *right;
	int key;
};

struct Node* newNode(int key)
{
	struct Node* ptr = new Node;
	ptr->key = key;
	ptr->left = ptr->right = NULL;
	return ptr;
}

// Standard BST insert function
struct Node* insert(struct Node* root, int key)
{
	if (!root)
		root = newNode(key);
	else if (root->key > key)
		root->left = insert(root->left, key);
	else if (root->key < key)
		root->right = insert(root->right, key);
	return root;
}


pair<int,int> dfs(struct Node* root, int a, int b,int &ans)
{
    if(root==NULL)
    {
        return {-1,-1};
    }
	pair<int,int>ret={-1,-1},le,ri;
	if(root->key==a)
	{
	    ret.first=0;
	}
	if(root->key==b)
	{
	    ret.second=0;
	}
	le=dfs(root->left,a,b,ans);
	ri=dfs(root->right,a,b,ans);
	ret.first=max(ret.first,max(le.first,ri.first));
	ret.second=max(ret.second,max(le.second,ri.second));
	if(ret.first>-1 && ret.second>-1)
	{
	    ans=min(ans,ret.first+ret.second);
	}
	if(ret.first>-1)
	{
	    ret.first+=1;
	}
	if(ret.second>-1)
	{
	    ret.second+=1;
	}
	return {ret.first,ret.second};
}


// Driver code
int main()
{
	struct Node* root = NULL;
	root = insert(root, 20);
	insert(root, 10);
	insert(root, 5);
	insert(root, 15);
	insert(root, 30);
	insert(root, 25);
	insert(root, 35);
	int a = 5, b = 35,ans=INT_MAX;
	dfs(root, a, b,ans);
	cout<<ans;
	return 0;
}
