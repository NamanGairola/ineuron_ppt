// 💡 **Question 7**

// Given a string S, the task is to write a program to print all permutations of a given string.

// **Example 1:**

// ***Input:***

// *S = “ABC”*

// ***Output:***

// *“ABC”, “ACB”, “BAC”, “BCA”, “CBA”, “CAB”*

// **Example 2:**

// ***Input:***

// *S = “XY”*

// ***Output:***

// *“XY”, “YX”*

#include<bits/stdc++.h>
using namespace std;
void rec(string &s,vector<int>&vis,string &ans,int notused,int n,int i)
{
    if(notused==0)
    {
        cout<<ans<<" ";
        return;
    }
    if(i==n)
    {
        return;
    }
    if(vis[i]==0)
    {
        vis[i]=1;
        ans.push_back(s[i]);
        rec(s,vis,ans,notused-1,n,0);
        vis[i]=0;
        ans.pop_back();
    }
    rec(s,vis,ans,notused,n,i+1);
}
int main()
{
    string s = "ABC";
    int n=s.size(),notused=s.size();
    vector<int>vis(n);
    string ans="";
    rec(s,vis,ans,notused,n,0);
    return 0;
}