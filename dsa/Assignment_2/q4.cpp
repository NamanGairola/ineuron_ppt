// Question 4
// You have a long flowerbed in which some of the plots are planted, and some are not.
// However, flowers cannot be planted in adjacent plots.
// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

// Example 1:
// Input: flowerbed = [1,0,0,0,1], n = 1
// Output: true

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int newflower;
    cin>>newflower;
    int maxflower=0;
    for(i=0;i<n;i++)
    {
        if((i-1<0 || nums[i-1]==0)&&(i+1>=n || nums[i+1]==0))
        {
            nums[i]=1;
            maxflower++;
        }
    }
    if(maxflower>=newflower)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}