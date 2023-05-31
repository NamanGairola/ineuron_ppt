// <aside>
// 💡 **Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

// Note that you must do this in-place without making a copy of the array.

// **Example 1:**
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// </aside>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for(i=0;i<n;i++)
    {
        if(nums[i]!=0)
        {
            swap(nums[j],nums[i]);
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}