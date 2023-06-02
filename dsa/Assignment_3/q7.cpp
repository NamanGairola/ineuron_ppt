// Question 7
// You are given an inclusive range [lower, upper] and a sorted unique integer array
// nums, where all elements are within the inclusive range.

// A number x is considered missing if x is in the range [lower, upper] and x is not in
// nums.

// Return the shortest sorted list of ranges that exactly covers all the missing
// numbers. That is, no element of nums is included in any of the ranges, and each
// missing number is covered by one of the ranges.

// Example 1:
// Input: nums = [0,1,3,50,75], lower = 0, upper = 99
// Output: [[2,2],[4,49],[51,74],[76,99]]

// Explanation: The ranges are:
// [2,2]
// [4,49]
// [51,74]
// [76,99]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,lower,upper,st;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cin>>lower>>upper;
    st=lower;
    for(i=0;i<n;i++)
    {
        if(st!=nums[i])
        {
            cout<<st<<" "<<nums[i]-1<<'\n';
        }
        st=nums[i]+1;
    }
    if(st!=upper)
    {
        cout<<st<<" "<<upper;
    }
    return 0;
}