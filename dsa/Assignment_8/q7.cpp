// 💡 **Question 7**

// Given an encoded string, return its decoded string.

// The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

// You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there will not be input like 3a or 2[4].

// The test cases are generated so that the length of the output will never exceed 105.

// **Example 1:**

// **Input:** s = "3[a]2[bc]"

// **Output:** "aaabcbc"

#include<bits/stdc++.h>
using namespace std;
string decodeString(string s) {
    int i,n=s.size(),m,j;
    stack<string>st;
    string str="",str2;
    for(i=0;i<n;i++)
    {
        if(s[i]=='[')
        {
            st.push(str);
            st.push("[");
            str="";
        }
        else if(s[i]==']')
        {
            while(st.top()!="[")
            {
                str=st.top()+str;
                st.pop();
            }
            st.pop();
            // cout<<st.top();
            m=stoi(st.top());
            st.pop();
            str2="";
            for(j=0;j<m;j++)
            {
                str2+=str;
            }
            st.push(str2);
            str="";
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            if(str.size()!=0 && !(str[0]>='0' && str[0]<='9'))
            {
                st.push(str);
                str="";
            }
            str+=s[i];
        }
        else
        {
            str+=s[i];
        }
    }
    st.push(str);
    str="";
    while(!st.empty())
    {
        str=st.top()+str;
        st.pop();
    }
    return str;
}
int main()
{
    string s = "3[a]2[bc]";
    string ans=decodeString(s);
    cout<<ans;
    return 0;
}