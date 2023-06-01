// Question 7
// An array is monotonic if it is either monotone increasing or monotone decreasing.

// An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is
// monotone decreasing if for all i <= j, nums[i] >= nums[j].

// Given an integer array nums, return true if the given array is monotonic, or false otherwise.

// Example 1:
// Input: nums = [1,2,2,3]
// Output: true

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,checkinc=1,checkdec=1;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for(i=1;i<n;i++)
    {
        if(nums[i]<nums[i-1])
        {
            checkinc=0;
        }
        if(nums[i]>nums[i-1])
        {
            checkdec=0;
        }
    }
    if(checkinc || checkdec)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}