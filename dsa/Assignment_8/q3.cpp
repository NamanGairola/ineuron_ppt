// 💡 **Question 3**

// Given two strings word1 and word2, return *the minimum number of **steps** required to make* word1 *and* word2 *the same*.

// In one **step**, you can delete exactly one character in either string.

// **Example 1:**

// **Input:** word1 = "sea", word2 = "eat"

// **Output:** 2

// **Explanation:** You need one step to make "sea" to "ea" and another step to make "eat" to "ea".

#include<bits/stdc++.h>
using namespace std;
int minDistance(string word1, string word2) {
    int i,j,n=word1.size(),m=word2.size();
    vector<vector<int>>arr(n+1,vector<int>(m+1));
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(word1[i-1]==word2[j-1])
            {
                arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
                arr[i][j]=max(arr[i][j],arr[i-1][j-1]+1);
            }
            else
            {
                arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
            }
        }
    }
    return n+m-2*arr[n][m];
}
int main()
{
    string s1 = "sea", s2 = "eat";
    int ans=minDistance(s1,s2);
    cout<<ans;
    return 0;
}