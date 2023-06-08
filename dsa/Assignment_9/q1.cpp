// 💡 **Question 1**

// Given an integer `n`, return *`true` if it is a power of two. Otherwise, return `false`*.

// An integer `n` is a power of two, if there exists an integer `x` such that `n == 2x`.

// **Example 1:**
// Input: n = 1 

// Output: true

// **Example 2:**
// Input: n = 16 

// Output: true

// **Example 3:**
// Input: n = 3 

// Output: false

#include<bits/stdc++.h>
using namespace std;
bool rec(int n)
{
    if(n==1)
    {
        return true;
    }
    if(n%2==0)
    {
        return rec(n/2);
    }
    else
    {
        return false;
    }
}
int main()
{
    int n=1;
    if(rec(n))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}