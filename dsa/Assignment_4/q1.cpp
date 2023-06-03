// 💡 **Question 1**
// Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

// **Example 1:**

// Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

// Output: [1,5]

// **Explanation:** Only 1 and 5 appeared in the three arrays.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    vector<int>arr1(n),arr2(n),arr3(n);
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>arr3[i];
    }
    map<int,int>m;
    map<int,int>::iterator itr;
    for(i=0;i<n;i++)
    {
        m[arr1[i]]++;
        m[arr2[i]]++;
        m[arr3[i]]++;
    }
    vector<int>ans;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second==3)
        {
            ans.push_back(itr->first);
        }
    }
    n=ans.size();
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}