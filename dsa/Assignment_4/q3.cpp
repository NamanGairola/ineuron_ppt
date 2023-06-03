// 💡 **Question 3**
// Given a 2D integer array matrix, return *the **transpose** of* matrix.

// The **transpose** of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

// **Example 1:**

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]

// Output: [[1,4,7],[2,5,8],[3,6,9]]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n;
    vector<vector<int>>nums(n,vector<int>(n));
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>nums[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                swap(nums[i][j],nums[j][i]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<nums[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}