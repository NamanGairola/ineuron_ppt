// Question 4
// Given a sorted array of distinct integers and a target value, return the index if the
// target is found. If not, return the index where it would be if it were inserted in
// order.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,target,j=0,k,m;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cin>>target;
    int l=0,r=n-1;
    while(l<r)
    {
        m=(l+r)/2;
        if(nums[m]>=target)
        {
            r=m;
        }
        else if(nums[m]<target)
        {
            l=m+1;
        }
    }
    cout<<l;
    return 0;
}