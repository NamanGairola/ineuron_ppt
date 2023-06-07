// 💡 **Question 4**

// You need to construct a binary tree from a string consisting of parenthesis and integers.

// The whole input represents a binary tree. It contains an integer followed by zero, one or two pairs of parenthesis. The integer represents the root's value and a pair of parenthesis contains a child binary tree with the same structure.
// You always start to construct the **left** child node of the parent first if it exists.

// **Input:** s = "4(2(3)(1))(6(5))"

// **Output:** [4,2,6,3,1,5]

#include<bits/stdc++.h>
using namespace std;
class BinaryTreeNode
    {
    public :
        int  data;
        BinaryTreeNode *left;
        BinaryTreeNode *right;

        BinaryTreeNode(int  data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

BinaryTreeNode* dfs(string &str, int &i)
{
    if(!(str[i]=='-' || (str[i]>='0' && str[i]<='9')))
    {
        return NULL;
    }
    int start=i,n=str.size();
    if(str[i]=='-')
    {
        i++;
    }
    for(;i<n && str[i]>='0' && str[i]<='9';i++)
    {
    }
    BinaryTreeNode* node= new BinaryTreeNode(stoi(str.substr(start,i-start)));
    if(i<n && str[i]=='(')
    {
        i++;
        node->left=dfs(str,i);
        i++;
    }
    if(i<n && str[i]=='(')
    {
        i++;
        node->right=dfs(str,i);
        i++;
    }
    return node;
}
BinaryTreeNode* treeFromBracket(string &str)
{
    // Write your code here
    if(str.size()==0)
    {
        return NULL;
    }
    int i;
    return dfs(str,i);
}
int main()
{
    string s = "4(2(3)(1))(6(5))";
    BinaryTreeNode* node=treeFromBracket(s); //made tree
    return 0;
}