// 💡 **Question 1**

// Given two strings s and t, *determine if they are isomorphic*.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// **Example 1:**

// **Input:** s = "egg", t = "add"

// **Output:** true

#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t) {
    int i,n=s.size(),count=0;
    vector<int>arr(150,-1);
    for(i=0;i<n;i++)
    {
        if(arr[s[i]]==-1)
        {
            arr[s[i]]=t[i];
        }
        else if(arr[s[i]]!=t[i])
        {
            return false;
        }
    }
    unordered_set<int>se;
    for(i=0;i<150;i++)
    {
        if(arr[i]>=0)
        {
            se.insert(arr[i]);
            count++;
        }
    }
    if(se.size()!=count)
    {
        return false;
    }
    return true;
}
int main()
{
    string s = "egg", t = "add";
    if(isIsomorphic(s,t))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}