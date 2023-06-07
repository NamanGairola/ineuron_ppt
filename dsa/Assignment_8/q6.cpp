// 💡 **Question 6**

// Given two strings s and p, return *an array of all the start indices of* p*'s anagrams in* s. You may return the answer in **any order**.

// An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// **Example 1:**

// **Input:** s = "cbaebabacd", p = "abc"

// **Output:** [0,6]

// **Explanation:**

// The substring with start index = 0 is "cba", which is an anagram of "abc".

// The substring with start index = 6 is "bac", which is an anagram of "abc".

#include<bits/stdc++.h>
using namespace std;
vector<int> findAnagrams(string s, string p) {
    vector<int> v;
    sort(p.begin(),p.end());
    string c;
    int i,j,n=s.size(),m=p.size(),a[26]={0},b[26]={0};
    if(n<m)
    {
        return v;
    }
    for(i=0;i<m;i++)
    {
        a[(int)p[i]-97]++;
        b[(int)s[i]-97]++;
    }
    for(j=0;j<26;j++)
    {
        if(a[j]!=b[j])
        {
            break;
        }
    }
    if(j==26)
    {
        v.push_back(0);
    }
    for(i=1;i<n-(m-1);i++)
    {
        b[(int)s[i-1]-97]--;
        b[(int)s[i+m-1]-97]++;
        for(j=0;j<26;j++)
        {
            if(a[j]!=b[j])
            {
                break;
            }
        }
        if(j==26)
        {
            v.push_back(i);
        }
    }
    return v;
}
int main()
{
    string s = "cbaebabacd", p = "abc";
    vector<int>ans=findAnagrams(s,p);
    for(int i;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}