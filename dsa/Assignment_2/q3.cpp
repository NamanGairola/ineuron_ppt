// Question 3
// We define a harmonious array as an array where the difference between its maximum value
// and its minimum value is exactly 1.

// Given an integer array nums, return the length of its longest harmonious subsequence
// among all its possible subsequences.

// A subsequence of an array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

// Example 1:
// Input: nums = [1,3,2,2,5,2,3,7]
// Output: 5

// Explanation: The longest harmonious subsequence is [3,2,2,2,3].

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
    map<int,int>m;
    map<int,int>::iterator itr;
    for(i=0;i<n;i++)
    {
        m[nums[i]]++;
    }
    itr=m.begin();
    int val=itr->first,fre=itr->second,ans=0;
    for(itr++;itr!=m.end();itr++)
    {
        if(itr->first-1==val)
        {
            ans=max(ans,(fre+itr->second));
        }
        val=itr->first;
        fre=itr->second;
    }
    cout<<ans;
    return 0;
}