// Question 5
// Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

// Example 1:
// Input: nums = [1,2,3]
// Output: 6

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int a=0,b=0,c=0;
    for(i=0;i<n;i++)
    {
        if(nums[i]>a)
        {
            c=b;
            b=a;
            a=nums[i];
        }
        else if(nums[i]>b)
        {
            c=b;
            b=nums[i];
        }
        else if(nums[i]>c)
        {
            c=nums[i];
        }
    }
    cout<<a*b*c;
    return 0;
}