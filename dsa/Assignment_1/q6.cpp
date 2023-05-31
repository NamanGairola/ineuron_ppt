// <aside>
// 💡 **Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// **Example 1:**
// Input: nums = [1,2,3,1]

// Output: true

// </aside>

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
    bool ans=false;
    unordered_map<int,int>m;
    for(i=0;i<n;i++)
    {
        m[nums[i]]++;
        if(m[nums[i]]==2)
        {
            ans=true;
            break;
        }
    }
    if(ans)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}