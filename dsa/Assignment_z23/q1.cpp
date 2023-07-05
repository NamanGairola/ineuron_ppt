// C++ program to find height of full binary tree
// using preorder
#include <bits/stdc++.h>
using namespace std;

// function to return max of left subtree height
// or right subtree height
void findDepthRec(char tree[], int n, int &i,int &ans,int depth)
{
	if(i==n-1 || tree[i]=='l')
    {
      	ans=max(ans,depth);
    	return ;
    }
  	i++;
  	findDepthRec(tree,n,i,ans,depth+1);
  	i++;
  	findDepthRec(tree,n,i,ans,depth+1);
}

// Driver program
int main()
{
	// Your C++ Code
	char tree[] = "nlnnlll";
	int n = strlen(tree);
	int ans=0,i=0;
  	findDepthRec(tree,n,i,ans,0);
  	cout<<ans;

	return 0;
}
