// <aside>
// 💡 **Q1.** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// **Example:**
// Input: nums = [2,7,11,15], target = 9
// Output0 [0,1]

// **Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1][

// </aside>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target,i,inp,pos1,pos2;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cin>>target;
    unordered_map<int,int>m;
    for(i=0;i<n;i++)
    {
        if(m.find(target-nums[i])!=m.end())
        {
            pos1=m[target-nums[i]];
            pos2=i;
            break;
        }
        m[nums[i]]=i;
    }
    cout<<pos1<<","<<pos2;
    return 0;
}