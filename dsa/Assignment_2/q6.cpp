// Question 6
// Given an array of integers nums which is sorted in ascending order, and an integer target,
// write a function to search target in nums. If target exists, then return its index. Otherwise,
// return -1.

// You must write an algorithm with O(log n) runtime complexity.

// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4

// Explanation: 9 exists in nums and its index is 4

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,target,m,check=0;
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
            if(nums[m]==target)
            {
                check=1;
            }
        }
        else if(nums[m]<target)
        {
            l=m+1;
        }
    }
    if(check)
    {
        cout<<l;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}