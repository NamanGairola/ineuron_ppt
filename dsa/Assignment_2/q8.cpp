// Question 8
// You are given an integer array nums and an integer k.

// In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

// The score of nums is the difference between the maximum and minimum elements in nums.

// Return the minimum score of nums after applying the mentioned operation at most once for each index in it.

// Example 1:
// Input: nums = [1], k = 0
// Output: 0

// Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cin>>k;
    int ans=0,mini=INT_MAX,maxi=INT_MIN;
    for(i=0;i<n;i++)
    {
        mini=min(mini,nums[i]);
        maxi=max(maxi,nums[i]);
    }
    mini+=k;
    maxi-=k;
    ans=maxi-mini;
    if(ans<0)
    {
        ans=0;
    }
    cout<<ans;
    return 0;
}