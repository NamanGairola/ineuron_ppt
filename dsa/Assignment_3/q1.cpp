// Question 1
// Given an integer array nums of length n and an integer target, find three integers
// in nums such that the sum is closest to the target.
// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

// Example 1:
// Input: nums = [-1,2,1,-4], target = 1
// Output: 2

// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,target;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cin>>target;
    sort(nums.begin(),nums.end());
    int ans=nums[0]+nums[1]+nums[2],cur,l,r,diff;
    diff=abs(ans-target);
    for(i=0;i<n;i++)
    {
        l=i+1;
        r=n-1;
        while(l<r)
        {
            cur=nums[i]+nums[l]+nums[r];
            if(abs(cur-target)<diff)
            {
                diff=abs(cur-target);
                ans=cur;
            }
            if(cur>target)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    cout<<ans;
    return 0;
}