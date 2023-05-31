// <aside>
// 💡 **Q8.** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

// You are given an integer array nums representing the data status of this set after the error.

// Find the number that occurs twice and the number that is missing and return them in the form of an array.

// **Example 1:**
// Input: nums = [1,2,2,4]
// Output: [2,3]

// </aside>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,dup;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    unordered_map<int,int>m;
    int realsum=(n*(n+1))/2,sum=0;
    for(i=0;i<n;i++)
    {
        m[nums[i]]++;
        if(m[nums[i]]==2)
        {
            dup=nums[i];
        }
        sum+=nums[i];
    }
    sum-=dup;
    vector<int>ans;
    ans.push_back(dup);
    ans.push_back(realsum-sum);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
