// 💡 **Question 5**

// Given an array of integers **arr**, the task is to find maximum element of that array using recursion.

// **Example 1:**

// Input: arr = {1, 4, 3, -5, -4, 8, 6};
// Output: 8

// **Example 2:**

// Input: arr = {1, 4, 45, 6, 10, -8};
// Output: 45

#include<bits/stdc++.h>
using namespace std;
int rec(vector<int>&arr,int i)
{
    if(i==0)
    {
        return arr[0];
    }
    return max(arr[i],rec(arr,i-1));
}
int main()
{
    vector<int>arr = {1, 4, 3, -5, -4, 8, 6};
    int n=7;
    int ans=rec(arr,n-1);
    cout<<ans;
    return 0;
}