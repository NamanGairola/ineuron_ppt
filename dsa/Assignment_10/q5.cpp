// 💡 **Question 5**

// We are given a string S, we need to find count of all contiguous substrings starting and ending with same character.

// **Examples :**

// ```
// Input  : S = "abcab"
// Output : 7
// There are 15 substrings of "abcab"
// a, ab, abc, abca, abcab, b, bc, bca
// bcab, c, ca, cab, a, ab, b
// Out of the above substrings, there
// are 7 substrings : a, abca, b, bcab,
// c, a and b.

// Input  : S = "aba"
// Output : 4
// The substrings are a, b, a and aba
// ```

#include<bits/stdc++.h>
using namespace std;
void rec(string &s,vector<vector<int>>arr,int n,int i)
{
    if(i==n)
    {
        return;
    }
    arr[s[i]-'a'].push_back(i);
    int j=0,si=arr[s[i]-'a'].size();
    for(j=0;j<si;j++)
    {
        cout<<s.substr(arr[s[i]-'a'][j],i-arr[s[i]-'a'][j]+1)<<" ";
    }
    rec(s,arr,n,i+1);
}
int main()
{
    string s="abcab";
    vector<vector<int>>arr(26,vector<int>());
    rec(s,arr,s.size(),0);
    return 0;
}