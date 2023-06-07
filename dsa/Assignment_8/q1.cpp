// 💡 **Question 1**

// Given two strings s1 and s2, return *the lowest **ASCII** sum of deleted characters to make two strings equal*.

// **Example 1:**

// **Input:** s1 = "sea", s2 = "eat"

// **Output:** 231

// **Explanation:** Deleting "s" from "sea" adds the ASCII value of "s" (115) to the sum.

// Deleting "t" from "eat" adds 116 to the sum.

// At the end, both strings are equal, and 115 + 116 = 231 is the minimum sum possible to achieve this.

#include<bits/stdc++.h>
using namespace std;
int minimumDeleteSum(string s1, string s2) {
    int i,j,n=s1.size(),m=s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    for(i=1;i<=n;i++)
    {
        dp[i][0]=dp[i-1][0]+s1[i-1];
    }
    for(i=1;i<=m;i++)
    {
        dp[0][i]=dp[0][i-1]+s2[i-1];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=min(dp[i-1][j]+s1[i-1],dp[i][j-1]+s2[j-1]);
            }
        }
    }
    return dp[n][m]; 
}
int main()
{
    string s1 = "sea", s2 = "eat";
    int ans=minimumDeleteSum(s1,s2);
    cout<<ans;
    return 0;
}