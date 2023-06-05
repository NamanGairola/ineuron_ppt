// 💡 **Question 2**

// You are given an m x n integer matrix matrix with the following two properties:

// - Each row is sorted in non-decreasing order.
// - The first integer of each row is greater than the last integer of the previous row.

// Given an integer target, return true *if* target *is in* matrix *or* false *otherwise*.

// You must write a solution in O(log(m * n)) time complexity.

// **Example 1:**

// **Input:** matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3

// **Output:** true

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3,m=3,n=4;
    int l=0,r=m*n-1,x,y,check=0,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        x=mid/n;
        y=mid-(x*n);
        if(matrix[x][y]==target)
        {
            check=1;
            break;
        }
        else if(matrix[x][y]<target)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(check==1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}