class Solution {
public:
    int trap(vector<int>& height) {
       //smamjha abhi try kartae hai ab 
        int l=0,r=height.size()-1;
        int lmax=0,rmax=0,ans=0;
        while(l<=r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]>lmax)
                {
                    lmax=height[l];
                }
                ans+=lmax-height[l];
                l++;
            }
            else
            {
                if(height[r]>rmax)
                {
                    rmax=height[r];
                }
                ans+=rmax-height[r];
                r--;
            }
        }
        return ans;
    }
};