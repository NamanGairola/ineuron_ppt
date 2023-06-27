//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};


Node* dfs(Node *root,int val)
{
    if(root==NULL)
    {
        Node *a=new Node(val);
        return a;
    }
    if(val<root->data)
    {
        root->left=dfs(root->left,val);
    }
    else
    {
        root->right=dfs(root->right,val);
    }
    return root;
}
bool check(int arr[],int n)
{
    Node *root=new Node(arr[0]);
    int i,si,j;
    for(i=1;i<n;i++)
    {
        root=dfs(root,arr[i]);
    }
    queue<Node*>q;
    q.push(root);
    i=0;
    while(!q.empty())
    {
        si=q.size();
        for(j=0;j<si;j++)
        {
            if(q.front()->left!=NULL)
            {
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL)
            {
                q.push(q.front()->right);
            }
            if(arr[i]==q.front()->data)
            {
                i++;
                q.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    // Code here
    int arr[] = {7, 4, 12, 3, 6, 8, 1, 5, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
    if(check(arr,n))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
