// 💡 **Question 4**

// Given an array of integers `nums` containing `n + 1` integers where each integer is in the range `[1, n]` inclusive.

// There is only **one repeated number** in `nums`, return *this repeated number*.

// You must solve the problem **without** modifying the array `nums` and uses only constant extra space.

// **Example 1:**

// ```
// Input: nums = [1,3,4,2,2]
// Output: 2

// ```

// **Example 2:**

// ```
// Input: nums = [3,1,3,4,2]
// Output: 3
// ```

#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
    int i,d,n=nums.size();
    for(i=0;i<n;i++)
    {
        if(nums[i]<0)
        {
            d=-nums[i];
        }
        else
        {
            d=nums[i];
        }
        if(nums[d]<0)
        {
            return d;
        }
        else
        {
            nums[d]=-nums[d];
        }
    }
    return 0;
}
int main()
{
    vector<int>nums = {1,3,4,2,2};
    cout<<findDuplicate(nums);
    return 0;
}