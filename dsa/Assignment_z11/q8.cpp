// 💡 **Question 8**

// Given two integer arrays `nums1` and `nums2`, return *an array of their intersection*. Each element in the result must appear as many times as it shows in both arrays and you may return the result in **any order**.

// **Example 1:**

// ```
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]

// ```

// **Example 2:**

// ```
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]
// Explanation: [9,4] is also accepted.
// ```

#include<bits/stdc++.h>
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int>ans;
    int i,n=nums1.size(),m=nums2.size(),times;
    int arr[1001]={0},arr2[1001]={0};
    for(i=0;i<n;i++)
    {
        arr[nums1[i]]++;
    }
    for(i=0;i<m;i++)
    {
        arr2[nums2[i]]++;
    }
    for(i=0;i<=1000;i++)
    {
        times=min(arr[i],arr2[i]);
        while(times--)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{
    vector<int>nums1 = {1,2,2,1}, nums2 = {2,2};
    vector<int>ans=intersect(nums1,nums2);
    for(int i;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}