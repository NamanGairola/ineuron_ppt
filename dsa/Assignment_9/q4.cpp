// 💡 **Question 4**

// Given a number N and a power P, the task is to find the exponent of this number raised to the given power, i.e. N^P.

// **Example 1 :** 

// Input: N = 5, P = 2

// Output: 25

// **Example 2 :**
// Input: N = 2, P = 5

// Output: 32

#include<bits/stdc++.h>
using namespace std;
int rec(int n,int p)
{
    if(p==1)
    {
        return n;
    }
    return n*rec(n,p-1);
}
int main()
{
    int n=5,p=2;
    int ans=rec(n,p);
    cout<<ans;
    return 0;
}