// 💡 **Question 7**

// Given two strings s and t, return true *if they are equal when both are typed into empty text editors*. '#' means a backspace character.

// Note that after backspacing an empty text, the text will continue empty.

// **Example 1:**

// **Input:** s = "ab#c", t = "ad#c"

// **Output:** true

// **Explanation:**

// Both s and t become "ac".

#include<bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t) {
    int i,n=s.size(),b=0;
    string sr="",tr="";
    for(i=n-1;i>=0;i--)
    {
        if(s[i]=='#')
        {
            b++;
        }
        else
        {
            if(b>0)
            {
                b--;
            }
            else
            {
                sr+=s[i];
            }
        }
    }
    n=t.size(),b=0;
    for(i=n-1;i>=0;i--)
    {
        if(t[i]=='#')
        {
            b++;
        }
        else
        {
            if(b>0)
            {
                b--;
            }
            else
            {
                tr+=t[i];
            }
        }
    }
    return sr==tr;
}
int main()
{
    string s = "ab#c", t = "ad#c";
    if(backspaceCompare(s,t))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
