// Question 2
// Given an array nums of n integers, return an array of all the unique quadruplets
// [nums[a], nums[b], nums[c], nums[d]] such that:
//            ● 0 <= a, b, c, d < n
//            ● a, b, c, and d are distinct.
//            ● nums[a] + nums[b] + nums[c] + nums[d] == target

// You may return the answer in any order.

// Example 1:
// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,target;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cin>>target;
    sort(nums.begin(),nums.end());
    int cur,l,r;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            l=j+1;
            r=n-1;
            while(l<r)
            {
                cur=nums[i]+nums[j]+nums[l]+nums[r];
                if(cur==target)
                {
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[l]<<" "<<nums[r]<<'\n';
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
    }
    return 0;
}