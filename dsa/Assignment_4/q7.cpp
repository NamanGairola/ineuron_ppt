// 💡 **Question 7**
// You are given an m x n matrix M initialized with all 0's and an array of operations ops, where ops[i] = [ai, bi] means M[x][y] should be incremented by one for all 0 <= x < ai and 0 <= y < bi.

// Count and return *the number of maximum integers in the matrix after performing all the operations*

// **Example 1:**

// **Input:** m = 3, n = 3, ops = [[2,2],[3,3]]

// **Output:** 4

// **Explanation:** The maximum integer in M is 2, and there are four of it in M. So return 4.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,opsn;
    cin>>m>>n;
    cin>>opsn;
    vector<vector<int>>ops(n,vector<int>(2));
    for(i=0;i<opsn;i++)
    {
        cin>>ops[i][0]>>ops[i][1];
    }
    int minx=INT_MAX,miny=INT_MAX;
    for(i=0;i<opsn;i++)
    {
        minx=min(minx,ops[i][0]);
        miny=min(miny,ops[i][1]);
    }
    cout<<minx*miny;
    return 0;
}