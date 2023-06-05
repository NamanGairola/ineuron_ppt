// 💡 **Question 6**

// An integer array original is transformed into a **doubled** array changed by appending **twice the value** of every element in original, and then randomly **shuffling** the resulting array.

// Given an array changed, return original *if* changed *is a **doubled** array. If* changed *is not a **doubled** array, return an empty array. The elements in* original *may be returned in **any** order*.

// **Example 1:**

// **Input:** changed = [1,3,4,2,6,8]

// **Output:** [1,3,4]

// **Explanation:** One possible original array could be [1,3,4]:

// - Twice the value of 1 is 1 * 2 = 2.
// - Twice the value of 3 is 3 * 2 = 6.
// - Twice the value of 4 is 4 * 2 = 8.

// Other original arrays could be [4,3,1] or [3,1,4].>

#include<bits/stdc++.h>
using namespace std;
vector<int> findOriginalArray(vector<int>& changed) {
    int i,n=changed.size();
    vector<int>arr(100001),ans;
    for(i=0;i<n;i++)
    {
        arr[changed[i]]++;
    }
    for(i=0;i<100001;i++)
    {
        while(arr[i])
        {
            if(i>(100000/2))
            {
                return {};
            }
            arr[i]--;
            if(arr[2*i]!=0)
            {
                arr[2*i]--;
                ans.push_back(i);
            }
            else
            {
                return {};
            }
        }
    }
    return ans;
}
int main()
{
    vector<int>changed = {1,3,4,2,6,8};
    vector<int>ans=findOriginalArray(changed);
    int i,n=ans.size();
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}