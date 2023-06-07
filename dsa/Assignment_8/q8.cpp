// 💡 **Question 8**

// Given two strings s and goal, return true *if you can swap two letters in* s *so the result is equal to* goal*, otherwise, return* false*.*

// Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

// - For example, swapping at indices 0 and 2 in "abcd" results in "cbad".

// **Example 1:**

// **Input:** s = "ab", goal = "ba"

// **Output:** true

// **Explanation:** You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.

#include<bits/stdc++.h>
using namespace std;
bool buddyStrings(string s, string goal) {
    int i,n=s.size(),j,k,check=0;
    if(s.size()!=goal.size())
    {
        return false;
    }
    vector<int>arr,fre(26);
    for(i=0;i<n;i++)
    {
        if(s[i]!=goal[i])
        {
            arr.push_back(i);
        }
        fre[s[i]-'a']++;
        if(fre[s[i]-'a']==2)
        {
            check=1;
        }
    }
    if(arr.size()==2)
    {
        if((s[arr[0]]==goal[arr[1]]) && (s[arr[1]]==goal[arr[0]]))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(arr.size()==0)
    {
        if(check==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "ab", goal = "ba";
    if(buddyStrings(s,goal))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}