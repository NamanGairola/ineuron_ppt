// 💡 **Question 3**

// ****Given a set represented as a string, write a recursive code to print all subsets of it. The subsets can be printed in any order.

// **Example 1:**

// Input :  set = “abc”

// Output : { “”, “a”, “b”, “c”, “ab”, “ac”, “bc”, “abc”}

// **Example 2:**

// Input : set = “abcd”

// Output : { “”, “a” ,”ab” ,”abc” ,”abcd”, “abd” ,”ac” ,”acd”, “ad” ,”b”, “bc” ,”bcd” ,”bd” ,”c” ,”cd” ,”d” }

#include<bits/stdc++.h>
using namespace std;
void rec(string &set,string &str,int n,int i)
{
    if(i==n)
    {
        cout<<str<<" ";
        return;
    }
    str.push_back(set[i]);
    rec(set,str,n,i+1);
    str.pop_back();
    rec(set,str,n,i+1);
}
int main()
{
    string set="abc";
    string str="";
    int n=set.size();
    rec(set,str,n,0);
    return 0;
}