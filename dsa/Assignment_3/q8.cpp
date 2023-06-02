// Question 8
// Given an array of meeting time intervals where intervals[i] = [starti, endi],
// determine if a person could attend all meetings.

// Example 1:
// Input: intervals = [[0,30],[5,10],[15,20]]
// Output: false

#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>&a,vector<int>&b)
{
    if(a[1]<=b[1])
    {
        return true;
    }
    return false;
}
int main()
{
    int n,i;
    cin>>n;
    vector<vector<int>>nums(n,vector<int>(2));
    for(i=0;i<n;i++)
    {
        cin>>nums[i][0]>>nums[i][1];
    }
    sort(nums.begin(),nums.end(),cmp);
    int check=1;
    for(i=0;i<n-1;i++)
    {
        if(nums[i][1]>=nums[i+1][0])
        {
            check=0;
            break;
        }
    }
    if(check)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}