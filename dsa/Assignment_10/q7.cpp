// 💡 **Question 7**

// Given a string **str**, the task is to print all the permutations of **str**. A **permutation** is an arrangement of all or part of a set of objects, with regard to the order of the arrangement. For instance, the words ‘bat’ and ‘tab’ represents two distinct permutation (or arrangements) of a similar three letter word.

// **Examples:**

// > Input: str = “cd”
// > 
// > 
// > **Output:** cd dc
// > 
// > **Input:** str = “abb”
// > 
// > **Output:** abb abb bab bba bab bba
// > 

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
    string s = "cd";
    int n=s.size(),notused=s.size();
    vector<int>vis(n);
    string ans="";
    rec(s,vis,ans,notused,n,0);
    return 0;
}