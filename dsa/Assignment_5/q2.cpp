// 💡 **Question 2**

// You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase **may be** incomplete.

// Given the integer n, return *the number of **complete rows** of the staircase you will build*.

// **Example 1:**

// **Input:** n = 5

// **Output:** 2

// **Explanation:** Because the 3rd row is incomplete, we return 2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    ans=sqrt(2*n);
    if(((ans*(ans+1))/2)<=n)
    {
        cout<<ans;
    }
    else
    {
        cout<<ans-1;
    }
    return 0;
}