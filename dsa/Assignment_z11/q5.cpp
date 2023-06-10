// 💡 **Question 5**

// Given two integer arrays `nums1` and `nums2`, return *an array of their intersection*. Each element in the result must be **unique** and you may return the result in **any order**.

// **Example 1:**

// ```
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

// ```

// **Example 2:**

// ```
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.
// ```

#include<bits/stdc++.h>
using namespace std;
bool search(vector<int>& nums, int target) {
    int l=0,r=nums.size()-1,m; 
    while(l<=r)
    {
        m=(l+r)/2;
        if(nums[m]==target)
        {
            return true;
        }
        else if(nums[m]>target)
        {
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return false;
}
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums2.begin(),nums2.end());
    int i,n=nums1.size();
    set<int>s;
    vector<int>ans;
    for(i=0;i<n;i++)
    {
        if(search(nums2,nums1[i]) && s.find(nums1[i])==s.end())
        {
            ans.push_back(nums1[i]);
            s.insert(nums1[i]);
        }
    }
    return ans;
}
int main()
{
    vector<int>nums1 = {1,2,2,1}, nums2 = {2,2};
    vector<int>ans=intersection(nums1,nums2);
    for(int i;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}