// 💡 **Question 3**

// Given two non-negative integers, num1 and num2 represented as string, return *the sum of* num1 *and* num2 *as a string*.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

// **Example 1:**

// **Input:** num1 = "11", num2 = "123"

// **Output:**

// "134"

#include<bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2) {
    reverse(num1.begin(),num1.end());
    reverse(num2.begin(),num2.end());
    int i,n=num1.size(),m=num2.size(),carry=0,val;
    string ans="";
    for(i=0;i<n && i<m;i++)
    {
        val=(num1[i]-48)+(num2[i]-48)+carry;
        if(val>=10)
        {
            carry=1;
            val=val%10;
        }
        else
        {
            carry=0;
        }
        ans.push_back((char)(val+48));
    }
    for(;i<n;i++)
    {
        val=(num1[i]-48)+carry;
        if(val>=10)
        {
            carry=1;
            val=val%10;
        }
        else
        {
            carry=0;
        }
        ans.push_back((char)(val+48));
    }
    for(;i<m;i++)
    {
        val=(num2[i]-48)+carry;
        if(val>=10)
        {
            carry=1;
            val=val%10;
        }
        else
        {
            carry=0;
        }
        ans.push_back((char)(val+48));
    }
    if(carry==1)
    {
        ans.push_back('1');
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    string num1 = "11", num2 = "123";
    string ans=addStrings(num1,num2);
    cout<<ans;
    return 0;
}