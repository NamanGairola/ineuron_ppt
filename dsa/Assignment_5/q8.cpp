// 💡 **Question 8**

// An integer array original is transformed into a **doubled** array changed by appending **twice the value** of every element in original, and then randomly **shuffling** the resulting array.

// Given an array changed, return original *if* changed *is a **doubled** array. If* changed *is not a **doubled** array, return an empty array. The elements in* original *may be returned in **any** order*.

// **Example 1:**

// **Input:** changed = [1,3,4,2,6,8]

// **Output:** [1,3,4]

// **Explanation:** One possible original array could be [1,3,4]:

// - Twice the value of 1 is 1 * 2 = 2.
// - Twice the value of 3 is 3 * 2 = 6.
// - Twice the value of 4 is 4 * 2 = 8.

// Other original arrays could be [4,3,1] or [3,1,4].

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
    vector<int> ans;
    unordered_map<int,int>m;
    sort(nums.begin(),nums.end());
    for(i=0;i<n;i++)
    {
        if(m.find(nums[i])==m.end())
        {
            ans.push_back(nums[i]);
            m[2*nums[i]]++;
        }
        else
        {
            m[nums[i]]--;
            if(m[nums[i]]==0)
            {
                m.erase(nums[i]);
            }
        }
    }
    for(i=0;i<n/2;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
