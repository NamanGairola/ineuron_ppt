// Question 6
// Given a non-empty array of integers nums, every element appears twice except
// for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only
// constant extra space.

// Example 1:
// Input: nums = [2,2,1]
// Output: 1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
        ans^=nums[i];
    }
    cout<<ans;
    return 0;
}