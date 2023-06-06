// 💡 **Question 8**

// You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

// **Example 1:**
// **Input:** coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]

// **Output:** true

#include<bits/stdc++.h>
using namespace std;
bool checkStraightLine(vector<vector<int>>& c) {
    int i,n=c.size();
    for(i=0;i<n-2;i++)
    {
        if((c[i+2][1]-c[i+1][1])*(c[i+1][0]-c[i][0])!=(c[i+1][1]-c[i][1])*(c[i+2][0]-c[i+1][0]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<vector<int>>coordinates = {{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
    if(checkStraightLine(coordinates))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}