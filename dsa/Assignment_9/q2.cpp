// 💡 **Question 2**

// Given a number n, find the sum of the first natural numbers.

// **Example 1:**

// Input: n = 3 

// Output: 6

// **Example 2:**

// Input  : 5 

// Output : 15

#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+rec(n-1);
}
int main()
{
    int n=3;
    int ans=rec(n);
    cout<<ans;
    return 0;
}