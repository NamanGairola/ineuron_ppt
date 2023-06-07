// 💡 **Question 5**

// Given an array of characters chars, compress it using the following algorithm:

// Begin with an empty string s. For each group of **consecutive repeating characters** in chars:

// - If the group's length is 1, append the character to s.
// - Otherwise, append the character followed by the group's length.

// The compressed string s **should not be returned separately**, but instead, be stored **in the input character array chars**. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done **modifying the input array,** return *the new length of the array*.

// You must write an algorithm that uses only constant extra space.

// **Example 1:**

// **Input:** chars = ['a','a','b','b','c','c','c']

// **Output:** Return 6, and the first 6 characters of the input array should be: ['a','2','b','2','c','3']

// **Explanation:**

// The groups are 'aa', 'bb', and 'ccc'. This compresses to 'a2b2c3'.

#include<bits/stdc++.h>
using namespace std;
int compress(vector<char>& chars) {
    int times=1,ans=0,i,n=chars.size(),j;
    char ch=chars[0];
    string s;
    vector<char>v;
    for(i=1;i<n;i++)
    {
        if(chars[i]==ch)
        {
            times++;
        }
        else
        {
            if(times==1)
            {
                ans++;
                v.push_back(ch);
            }
            else
            {
                ans++;
                v.push_back(ch);
                s=to_string(times);
                for(j=0;j<s.size();j++)
                {
                    ans++;
                    v.push_back(s[j]);
                }
            }
            times=1;
            ch=chars[i];
        }
    }
    if(times==1)
    {
        ans++;
        v.push_back(ch);
    }
    else
    {
        ans++;
        v.push_back(ch);
        s=to_string(times);
        for(j=0;j<s.size();j++)
        {
            ans++;
            v.push_back(s[j]);
        }
    }
    chars=v;
    return ans;
}
int main()
{
    vector<char>chars = {'a','a','b','b','c','c','c'};
    int ans=compress(chars);
    cout<<ans;
    return 0;
}