// 💡 **Question 8**

// Given an array, find a product of all array elements.

// **Example 1:**

// Input  : arr[] = {1, 2, 3, 4, 5}
// Output : 120
// **Example 2:**

// Input  : arr[] = {1, 6, 3}
// Output : 18

#include<bits/stdc++.h>
using namespace std;
int rec(vector<int>&arr,int i)
{
    if(i==0)
    {
        return arr[i];
    }
    return arr[i]*rec(arr,i-1);
}
int main()
{
    vector<int>arr = {1, 2, 3, 4, 5};
    int n=5;
    int ans=rec(arr,n-1);
    cout<<ans;
    return 0;
}