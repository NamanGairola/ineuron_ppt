// 💡 **Question 4**

// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

// **Example 1:**

// **Input:** s = "Let's take LeetCode contest"

// **Output:** "s'teL ekat edoCteeL tsetnoc"

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Let's take LeetCode contest";
    stringstream ss(s);
    string word,ans="";
    while(ss>>word)
    {
        reverse(word.begin(),word.end());
        ans+=word+" ";
    }
    ans.pop_back();
    cout<<ans;
    return 0;
}