// 💡 **Question 1**

// A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:

// - s[i] == 'I' if perm[i] < perm[i + 1], and
// - s[i] == 'D' if perm[i] > perm[i + 1].

// Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return **any of them**.

// **Example 1:**

// **Input:** s = "IDID"

// **Output:**

// [0,4,1,3,2]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="IDID";
    int i,n=s.size(),st=0,e=n;
    vector<int>ans;
    for(i=0;i<n;i++)
    {
        if(s[i]=='I')
        {
            ans.push_back(st);
            st++;
        }
        else
        {
            ans.push_back(e);
            e--;
        }
    }
    ans.push_back(st);
    for(i=0;i<n+1;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}