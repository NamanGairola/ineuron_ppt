// 💡 **Question 6**

// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears **once** or **twice**, return *an array of all the integers that appears **twice***.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.

// **Example 1:**

// **Input:** nums = [4,3,2,7,8,2,3,1]

// **Output:**

// [2,3]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int>ans;
    for(i=0;i<n;i++)
    {
        a=abs(nums[i]);
        if(nums[a-1]<0)
        {
            ans.push_back(a);
        }
        nums[a-1]=-nums[a-1];
    }
    n=ans.size();
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}