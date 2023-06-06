// 💡 **Question 5**

// Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.

// If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.

// **Example 1:**

// **Input:** s = "abcdefg", k = 2

// **Output:**

// "bacdfeg"

#include<bits/stdc++.h>
using namespace std;
string reverseStr(string s, int k) {
    int check=0,i,n=s.size();
    for(i=0;i<n;i+=k)
    {
        check=check^1;
        if(check==1)
        {
            if(i+k<n)
            {
                reverse(s.begin()+i,s.begin()+i+k);
            }
            else
            {
                reverse(s.begin()+i,s.end());
            }
        }
    }
    return s;
}
int main()
{
    string s = "abcdefg";
    int k = 2;
    string ans=reverseStr(s,k);
    cout<<ans;
    return 0;
}