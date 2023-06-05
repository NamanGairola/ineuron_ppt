// 💡 **Question 4**

// Given a binary array nums, return *the maximum length of a contiguous subarray with an equal number of* 0 *and* 1.

// **Example 1:**

// **Input:** nums = [0,1]

// **Output:** 2

// **Explanation:**

// [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

#include<bits/stdc++.h>
using namespace std;
int findMaxLength(vector<int>& nums) {
    int n=nums.size(),i,ans=0,sum=0;
    unordered_map<int,int>m;
    for(i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            sum--;
        }
        else
        {
            sum++;
        }
        if(sum==0)
        {
            if(i+1>ans)
            {
                ans=i+1;
            }
        }
        else
        {
            if(m[sum]==0)
            {
                m[sum]=i+1;
            }
            else
            {
                if(i+1-m[sum]>ans)
                {
                    ans=i+1-m[sum];
                }
            }
        }
    }
    return ans;
}
int main()
{
    vector<int>nums = {0,1};
    cout<<findMaxLength(nums);
    return 0;
}