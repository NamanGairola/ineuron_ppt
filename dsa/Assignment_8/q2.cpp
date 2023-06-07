// 💡 **Question 2**

// Given a string s containing only three types of characters: '(', ')' and '*', return true *if* s *is **valid***.

// The following rules define a **valid** string:

// - Any left parenthesis '(' must have a corresponding right parenthesis ')'.
// - Any right parenthesis ')' must have a corresponding left parenthesis '('.
// - Left parenthesis '(' must go before the corresponding right parenthesis ')'.
// - '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".

// **Example 1:**

// **Input:** s = "()"

// **Output:**

// true


#include<bits/stdc++.h>
using namespace std;
bool checkValidString(string s) {
    int i,n=s.size(),open=0,close=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            open++;
            close++;
        }
        else if(s[i]==')')
        {
            open--;
            close--;
        }
        else
        {
            open++;
            close--;
        }
        if(open<0)
        {
            return false;
        }
        close=max(close,0);
    }
    if(close==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "()";
    if(checkValidString(s))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}