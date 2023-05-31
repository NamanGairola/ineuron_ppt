// <aside>
// 💡 **Q4.** You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

// **Example 1:**
// Input: digits = [1,2,3]
// Output: [1,2,4]

// **Explanation:** The array represents the integer 123.

// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].

// </aside>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>nums(n),ans;
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    nums[n-1]++;
    for(i=n-1;i>=0;i--)
    {
        if(nums[i]==10)
        {
            if(i-1>=0)
            {
                nums[i-1]++;
                nums[i]=0;
            }
        }
    }
    if(nums[0]==10)
    {
        ans.push_back(1);
        ans.push_back(0);
    }
    else
    {
        ans.push_back(nums[0]);
    }
    for(i=1;i<n;i++)
    {
        ans.push_back(nums[i]);
    }
    n=ans.size();
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}