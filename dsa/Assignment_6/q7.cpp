// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

// **Example 1:**
// **Input:** n = 3

// **Output:** [[1,2,3],[8,9,4],[7,6,5]]

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>>ans(n,vector<int>(n));
    int i=-1,j=-1,m=n-1,k,c=1;
    while(m>0)
    {
        i++;
        j++;
        for(k=0;k<m;k++,j++)
        {
            ans[i][j]=c;
            c++;
        }
        if(c>n*n)
        {
            break;
        }
        for(k=0;k<m;k++,i++)
        {
            ans[i][j]=c;
            c++;
        }
        if(c>n*n)
        {
            break;
        }
        for(k=0;k<m;k++,j--)
        {
            ans[i][j]=c;
            c++;
        }
        if(c>n*n)
        {
            break;
        }
        for(k=0;k<m;k++,i--)
        {
            ans[i][j]=c;
            c++;
        }
        if(c>n*n)
        {
            break;
        }
        m=m-2;
    }
    if(n%2==1)
    {
        n=n/2;
        ans[n][n]=c;
    }
    return ans;
}
int main()
{
    int n=3;
    vector<vector<int>>ans=generateMatrix(n);
    int i,j,m=ans.size(),c=ans[0].size();
    for(i=0;i<m;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}