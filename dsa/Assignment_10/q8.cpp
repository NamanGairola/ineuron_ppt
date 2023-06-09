// 💡 **Question 8**

// Given a string, count total number of consonants in it. A consonant is an English alphabet character that is not vowel (a, e, i, o and u). Examples of constants are b, c, d, f, and g.

// **Examples :**

// ```
// Input : abc de
// Output : 3
// There are three consonants b, c and d.

// Input : geeksforgeeks portal
// Output : 12
// ```

#include<bits/stdc++.h>
using namespace std;
int rec(string &s,int n,int i)
{
    if(i==n)
    {
        return 0;
    }
    if(s[i]>='a' && s[i]<='z' && (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'))
    {
        return 1+rec(s,n,i+1);
    }
    else
    {
        return rec(s,n,i+1);
    }
}
int main()
{
    string s="abc de";
    int n=s.size();
    int ans=rec(s,n,0);
    cout<<ans;
    return 0;
}