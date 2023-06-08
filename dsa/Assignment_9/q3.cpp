// 💡 **Question 3**

// ****Given a positive integer, N. Find the factorial of N. 

// **Example 1:**

// Input: N = 5 

// Output: 120

// **Example 2:**

// Input: N = 4

// Output: 24

#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*rec(n-1);
}
int main()
{
    int n=3;
    int ans=rec(n);
    cout<<ans;
    return 0;
}