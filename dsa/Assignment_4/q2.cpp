// 💡 **Question 2**

// Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

// - answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
// - answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

// **Note** that the integers in the lists may be returned in **any** order.

// **Example 1:**

// **Input:** nums1 = [1,2,3], nums2 = [2,4,6]

// **Output:** [[1,3],[4,6]]

// **Explanation:**

// For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

// For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m;
    cin>>n>>m;
    vector<int>nums1(n),nums2(m);
    for(i=0;i<n;i++)
    {
        cin>>nums1[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>nums2[i];
    }
    map<int,int>ma,ma2;
    for(i=0;i<n;i++)
    {
        ma[nums1[i]]++;
    }
    for(i=0;i<m;i++)
    {
        ma2[nums2[i]]++;
    }
    vector<vector<int>>ans(2);
    for(i=0;i<n;i++)
    {
        if(ma2.find(nums1[i])==ma2.end())
        {
            ans[0].push_back(nums1[i]);
        }
    }
    for(i=0;i<m;i++)
    {
        if(ma.find(nums2[i])==ma.end())
        {
            ans[1].push_back(nums2[i]);
        }
    }
    for(i=0;i<ans[0].size();i++)
    {
        cout<<ans[0][i]<<" ";
    }
    cout<<'\n';
    for(i=0;i<ans[1].size();i++)
    {
        cout<<ans[1][i]<<" ";
    }
    return 0;
}