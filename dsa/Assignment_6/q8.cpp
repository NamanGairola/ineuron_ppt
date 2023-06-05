// 💡 **Question 8**

// Given two  mat1 of size m x k and mat2 of size k x n, return the result of mat1 x mat2. You may assume that multiplication is always possible.

// **Example 1:**
// **Input:** mat1 = [[1,0,0],[-1,0,3]], mat2 = [[7,0,0],[0,0,0],[0,0,1]]

// **Output:**

// [[7,0,0],[-7,0,3]]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>mat1 = {{1,0,0},{-1,0,3}};
    vector<vector<int>>mat2 = {{7,0,0},{0,0,0},{0,0,1}};
    int m=mat1.size(),l=mat1[0].size(),n=mat2[0].size();
    vector<vector<int>>ans(m);
    int i,j,k,val;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            val=0;
            for(k=0;k<l;k++)
            {
                val+=(mat1[i][k]*mat2[k][j]);
            }
            ans[i].push_back(val);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}