// 💡 **Question 2**

// Given a string num which represents an integer, return true *if* num *is a **strobogrammatic number***.

// A **strobogrammatic number** is a number that looks the same when rotated 180 degrees (looked at upside down).

// **Example 1:**

// **Input:** num = "69"

// **Output:**

// true

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num="69";
    string rev=num;
    reverse(rev.begin(),rev.end());
    int check=1,i,n=rev.size();
    for(i=0;i<n;i++)
    {
        if(rev[i]!='0' && rev[i]!='1' && rev[i]!='8' && rev[i]!='6' && rev[i]!='9')
        {
            check=0;
        }
        if(rev[i]=='6')
        {
            rev[i]='9';
        }
        else if(rev[i]=='9')
        {
            rev[i]='6';
        }
    }
    if(num!=rev)
    {
        check=0;
    }
    if(check==1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}