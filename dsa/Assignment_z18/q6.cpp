    bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[1]<b[1])
        {
            return true; 
        }
        else
        {
            return false;
        }
    }
class Solution {
public:

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int i,arrow=0,j=0;
        long long int max=-2147483649;
        for(i=0;i<points.size();i++)
        {
            if(max<points[i][0])
            {
                max=points[i][1];
                arrow++;
            }
        }
        return arrow;
    }
};