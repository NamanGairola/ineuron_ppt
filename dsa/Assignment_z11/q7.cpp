// 💡 **Question 7**

// Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.

// If `target` is not found in the array, return `[-1, -1]`.

// You must write an algorithm with `O(log n)` runtime complexity.

// **Example 1:**

// ```
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// ```

// **Example 2:**

// ```
// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

// ```

// **Example 3:**

// ```
// Input: nums = [], target = 0
// Output: [-1,-1]
// ```

#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
    int l=0,r,n=nums.size(),mid;
    r=n-1;
    vector<int>ans;
    while(l<r)
    {
        // cout<<l<<" "<<r<<'\n';
        mid=(l+r)/2;
        if(nums[mid]<target)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(l>=0 && l<n && nums[l]==target)
    {
        ans.push_back(l);
    }
    else if(l+1>=0 && l+1<n && nums[l+1]==target)
    {
        ans.push_back(l+1);
    }
    else
    {
        return {-1,-1};
    }
    l=0;
    r=n-1;
    while(l<r)
    {
        mid=(l+r)/2;
        if(nums[mid]<=target)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(r>=0 && r<n && nums[r]==target)
    {
        ans.push_back(r);
    }
    else if(r-1>=0 && r-1<n && nums[r-1]==target)
    {
        ans.push_back(r-1);
    }
    else
    {
        return {-1,-1};
    }
    return ans;
}
int main()
{
    vector<int>nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int>ans=searchRange(nums,target);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}